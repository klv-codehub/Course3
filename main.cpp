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

class Graph {
    int V;
    list<int> *adj;
    bool topologicalSortUtil(int v, int color[], stack<int> &Stack);

public:
    Graph(int V);
    void addEdge(int v, int w);
    bool topologicalSort();
    void generator();
};

Graph::Graph(int V) {
    this->V = V;
    adj = new list<int>[V];

    ofstream fout;
    fout.open(PATH);
    if (!fout.is_open()) cout << "Cannot open the file\n";

    fout << "digraph {\n}";
    fout.close();
    //очистить файл .dot
    //добавить инициализацию графа в файл .dot
}

void Graph::addEdge(int v, int w) {
    adj[v].push_back(w);

    ofstream fout;
    fout.open(PATH, ios::in);
    if (!fout.is_open()) cout << "Cannot open the file\n";

    fout.seekp(-1, ios::end);
    fout << "\t"<< v << " -> " << w << ";\n}";
    fout.close();
    //добавить строку в файл .dot
}

bool Graph::topologicalSortUtil(int v, int color[],
                                stack<int> &Stack) {
    if (color[v] == GREY) {
        cout << "Cycle detected => ";
        return false;
    }
    color[v] = GREY;

    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (color[*i] != BLACK)
            if (!topologicalSortUtil(*i, color, Stack)) return false;

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

    cout << "Following is a Topological Sort of the given graph:\n";
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

//void addStringToFile(string str) {
//    ofstream fout;
//    fout.open(path);
//    if (!fout.is_open()) {
//        cout << "Cannot open the file\n";
//        exit(1);
//    }
//    fout << str;
//    fout.close();
//}

int main() {
    srand(time(nullptr));
    // Create a graph given in the above diagram
    Graph g(15);
    g.generator();


    g.topologicalSort();

    return 0;
}