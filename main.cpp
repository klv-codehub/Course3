#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

class Node {

    friend class Graph;

    int tag;
    vector<Node*> sonsPaths;
    Node *parent;

public:
    Node(): tag(0), sonsPaths(1), parent(nullptr) {sonsPaths[0] = nullptr;};
    ~Node() {
        sonsPaths.clear();
    }
};

class Graph {

    Node *root;
    int numberOfNodes;


public:
    Graph(): root(nullptr), numberOfNodes(0) {};
    ~Graph() {
        free(root);
    }

//    void printGraphElement(Node *item) {
//        cout << item->tag;
//    }

    Node *CreateGraph () {
        auto *newItem = new Node;
        newItem->tag = rand();
        int numberOfSons = rand()%2;
        for (int i = 0; i < numberOfSons; i++) {
            (newItem->sonsPaths).push_back(CreateGraph());
        }
        cout << newItem->sonsPaths.size();
        return newItem;
    };

    void CreateRoot() {
        root = CreateGraph();
    }
};

int main() {
    srand((unsigned int)time(nullptr));
    return 0;
}