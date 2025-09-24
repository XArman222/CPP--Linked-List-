//Arman Majhi
//24070123022

#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int data) {
        val = data;
        next = NULL;
    }
};
int main() {
    Node* n1 = new Node(10);
    cout << "Node value: " << n1->val << endl;
    delete n1;
    return 0;
}

//Output
//Node value: 10
