#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *Next;

    //Constructor declare
    Node(int data){
        this -> data = data;
        this -> Next = NULL;
    }
};
void printLinkList(Node* &head);
void printLinkList(Node* &head)
{
    Node *currentNode = head;
    while(currentNode != NULL){
        cout<<currentNode->data;
        if(currentNode->Next != NULL) cout<<" -> ";
        currentNode = currentNode->Next;
    }
    cout<<endl;
}
int main()
{
    Node *head = new Node(5);
    Node *second = new Node(10);
    Node *third = new Node(15);
    Node *fourth = new Node(20);
    Node *five = new Node(25);

    head->Next = second;
    second->Next = third;
    third->Next = fourth;
    fourth->Next = five;

    printLinkList(head);

    return 0;
}
