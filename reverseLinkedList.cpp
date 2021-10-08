//reverse a linked list using recursion

#include <iostream>
using namespace std;
 
 //node structure
struct Node {
    int data;
    struct Node* next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

//linked list structure
 
struct LinkedList {
    Node* head;
    LinkedList()
    {
        head = NULL;
    }
 
  //main reverse logic
    Node* reverse(Node* head)
    {
        if (head == NULL || head->next == NULL)
            return head;
        // Recursive call
        Node* rest = reverse(head->next);
        head->next->next = head;   
        head->next = NULL;

        return rest;
    }
 
    void print()
    {
        struct Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
 
    void push(int data)
    {
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
    }
};
 
int main()
{
    LinkedList ll;
    ll.push(30);
    ll.push(34);
    ll.push(5);
    ll.push(85);
 
    cout << "Linked List before reversing\n";
    ll.print();
    ll.head = ll.reverse(ll.head);
 
    cout << "\nLinked List after reversing \n";
    ll.print();
    return 0;
}
