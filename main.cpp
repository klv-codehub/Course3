#include <iostream>
#include <fstream>
#include <list>
#include <stack>

using namespace std;

const string PATH = "/Users/artemkaloev/Desktop/study/Course3/graph.dot";

enum color {
    WHITE,
    GREY,
    BLACK
};

struct node {
    int num;
    list<node*> siblings;
};

class Graph {
    int V;
    node *nodeArray;
//    list<int> *adj;
    bool topologicalSortUtil(int v, int color[], stack<int> &Stack);

public:
    Graph(int V);
//    Graph(const Graph &old);
    void addEdge(int v, int w);
    bool topologicalSort();
    void generator();
    //деструктор
};

Graph::Graph(int V) {
    this->V = V;
    nodeArray = new node[V];
//    adj = new list<int>[V];

    ofstream fout;
    fout.open(PATH);
    if (!fout.is_open()) cout << "Cannot open the file\n";

    fout << "digraph {\n}";
    fout.close();
    //очистить файл .dot
    //добавить инициализацию графа в файл .dot
}

void Graph::addEdge(int v, int w) {
//    adj[v].push_back(w);
    nodeArray[v].siblings.push_back(&nodeArray[w]);

    ofstream fout;
    fout.open(PATH, ios::in);
    if (!fout.is_open()) cout << "Cannot open the file\n";

    fout.seekp(-1, ios::end);
    fout << "\t"<< v << " -> " << w << ";\n}";
    fout.close();
    //добавить строку в файл .dot
}

bool Graph::topologicalSortUtil(int v, int color[], stack<int> &Stack) {
    if (color[v] == GREY) {
        cout << "Cycle detected => ";
        return false;
    }
    color[v] = GREY;

    list<node*>::iterator i;
    int j = 0;
    for (i = nodeArray[v].siblings.begin(); i != nodeArray[v].siblings.end(); ++i, ++j)
        if (color[j] != BLACK)
            if (!topologicalSortUtil(j, color, Stack)) return false;

    color[v] = BLACK;
    Stack.push(v);
    return true;
}

bool Graph::topologicalSort() {
    stack<int> Stack;

    int *color = new int[V];
    for (int i = 0; i < V; i++)
        color[i] = WHITE;

    for (int i = 0; i < V; i++) {
        if (color[i] == WHITE)
            if (!topologicalSortUtil(i, color, Stack)) {
                cout << "Topological sort of the given graph is impossible";
                while(!Stack.empty()) Stack.pop();
                return false;
            }
    }

    cout << "\nFollowing is a Topological Sort of the given graph:\n";

    while (!Stack.empty()) {
        cout << Stack.top() << " ";
        Stack.pop();
    }
    return true;
}
void Graph :: generator ()
{
    const int PERCENT = 40;
    for (int j = 0; j < V; j++)
        for (int k = j + 1; k < V; k++)
            if ( (rand () % 100) < PERCENT) {
                addEdge(j, k);
            }
}

//Graph::Graph(const Graph &old) {
//    V = old.V;
//    nodeArray = new node[V];
//    for (int i = 0; i < V; i++) {
//
//    }
////    adj = new list<int>[V];
////    for (int i = 0; i < V; i++) {
////        adj[i] = old.adj[i];
////    }
//}

int main() {
    srand(time(nullptr));
    // Create a graph given in the above diagram
    Graph g(15);
    g.generator();
    g.topologicalSort();

//    Graph n(g);
//    n.topologicalSort();

    return 0;
}