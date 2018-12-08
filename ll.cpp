/*
  PAYTON LONG//11-30-18
  CS2 PROJECT #9//LINKED LISTS
  LINKED LISTS CAN GROW AND SHRINK ACCORDINGLY TO
  THE PROGRAM! LL ARE FASTER THAN VECTORS!!
*/
#include <iostream>
#include <string>
using namespace std;

//Declare Linked List Node:
struct Node{
    int ID;
    double gpa;
    string name;
    string address;
    Node *next;
};

//Declaration of head node:
struct Node *head=NULL;

//Prototypes for functions:
//Inserting node and its values:
void insertNode(int ID, double GPA, string name, string address){
    struct Node *newNode=new Node;
    newNode->ID=ID;
    newNode->gpa=GPA;
    newNode->name=name;
    newNode->address=address;
    newNode->next=head;
    head=newNode;
}
//Display all items:
void display(){
    if(head==NULL){
        cout<<"List is empty!"<<endl;
        return;
    }
    struct Node *temp=head;
    while(temp!=NULL){
        cout<< "Student ID: " << temp->ID << ", Name: " << temp->name <<
          ", Address: " << temp->address << ", GPA: " << temp->gpa << endl;
        temp=temp->next;
    }
    cout<<endl;
}
//delete node:
void deleteItem(){
    if(head==NULL){
        cout<<"List is empty!"<<endl;
        return;
    }
    cout<<head->ID<<" is removed."<<endl;
    head=head->next;
}

//Main loop:
int main(){
  display();
  for(int i = 0; i < 15; i++){
    int ID;
    string name;
    string address;
    double GPA;
    cout << "Please enter a name for logging to linked lists: " << endl;
    cin >> name;
    cout << "Please enter a ID: " << endl;
    cin >> ID;
    cout << "Please enter an address: " << endl;
    cin >> address;
    cout << "Please enter student's GPA: " << endl;
    cin >> GPA;
    insertNode(ID, GPA, name, address);
  }
  display();
  for(int i = 0; i < 15; i++){ deleteItem(); }
  deleteItem();
  display();
  return 0;
}
