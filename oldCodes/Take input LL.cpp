#include<iostream>
#include<string>
#include<cstring>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node* takeInput()
{
    Node* head = NULL,*tail = NULL;
    int data;
    cin>>data;
    while(data != -1)
    {
        Node* newNode = new Node(data);
        if(head == NULL)
        {
            head = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;  // tail = tail->next;
          /*  Node* lastNode = head;
            while(lastNode->next != NULL)
            {
                lastNode  = last->next;
            }
            lastNode->next = newNode;*/
        }
        cin>>data;
    }
    return head;
}

void printLL(Node* head)
{
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
}
int main()
{
    Node* head = takeInput();
    printLL(head);
}
