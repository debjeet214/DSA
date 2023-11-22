#include <iostream>
struct Node {
    int data;
    Node* next;
};
void insertAtBeginning(Node*& head, int data) {
    Node* newNode = new Node{data, head};
    head = newNode;
}
int main() {
    Node* head = NULL;
    insertAtBeginning(head, 10); 
    insertAtBeginning(head, 20);
    insertAtBeginning(head, 30);
    insertAtBeginning(head, 90);

    for (Node* curr = head; curr != NULL; curr = curr->next) {
        std::cout << curr->data << " ";
    }
    return 0;
}
