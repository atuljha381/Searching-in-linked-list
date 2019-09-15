#include<iostream>
using namespace std;
//Declare a class
class Node
{
public:
    int data; //To store data in linked list
    Node *next; //Node pointer
};
//Function to print data stored in Linked List
void print_all(Node *n)
{
        while(n!=NULL)//The loop will move until the end of the list (As the list is initialized as NULL)
    {
        cout<<n<<" data: "<<n->data; //print data
        cout<<endl;
        n = n->next; //move the pointer to next one;
    }
}
//To search an element from the list;
void search_list(Node *n)
{
    int num;
    cout<<"Enter number to search"<<endl;
    cin>>num; //Enter the number to search
    while(n!=NULL) //Loop till end of list
    {
        if(num==n->data) //compare element with each data in the list
        {
            cout<<"Element present at: "<<n<<endl; //print the address where the element is stored

        }
        n=n->next; //move the pointer to next node
    }

}
main()
{
    //Declare nodes
    Node *head= new Node();
    Node *second= new Node();
    Node *third= new Node();
    //Insert value in them
    head->data=30;
    head->next=second; //Point them to different Node

    second->data=20;
    second->next=third;

    third->data=10;
    third->next=NULL; //At the end make node pointer as NULL

    print_all(head); //print the data by passing the first node
    search_list(head); //searching function
}
