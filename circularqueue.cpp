#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
Node *front = NULL;
Node *rear = NULL;

void enqueue(int val)
{
    if(front==NULL || rear==NULL)
    {
        Node *newNode;
        newNode = new Node;

        newNode->data = val;
        newNode->next = NULL;

        front = newNode;
        rear = newNode;
    }
    else
    {
        Node *newNode;
        newNode = new Node;

        newNode->data = val;
        rear->next = newNode;


        newNode->next = front;
        rear = newNode;
    }

}

void dequeue()
{

    Node *n;
    n = front;
    if(front == NULL)
    {
        cout<<"Underflow \n"<<endl;
        return;
    }
    else
    {
        front = front->next;
        delete(n);
    }
}

void display()
{
    Node *ptr;
    ptr = front;
    if(ptr == NULL)
    {
        cout<<"Queue is Empty \n"<<endl;
        return;
    }
    else
    {
        do
        {
            cout<<"\n";
            cout<<ptr->data<<" ";
            ptr = ptr->next;
            cout<<"\n";
        }
        while(ptr != rear->next);
    }
}

int main()
{
    int choice;
    int val;
    bool run=true;
    cout<<"CIRCULAR QUEUE OPERATIONS USING LINKED LIST"<<endl;
   while (run) {
        cout << "1. Insert Element\n2. Remove Element\n3. Display Queue\n4. Exit"<< endl;
        cin>>choice;

        switch (choice) {
            case 1:
                cout << "Enter element to enter queue : ";
                cin>>val;
                enqueue(val);
                break;
            case 2:
                
                dequeue();
                
                break;
            case 3:
                display();
                break;
                
            default:
                cout<<"Queue Exited\n";
                run = false;
                break;
        }
        }
}
