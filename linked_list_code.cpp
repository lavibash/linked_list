#include "LinkedList.h"
#include <iostream>


using namespace std;


Node * LinkedList::createNewNode(int data) {
	struct Node* newNode = new Node;
	
    newNode->data = data;
	newNode->next = NULL;

    return newNode;
}

void LinkedList::appendFirst(int node_data){

    Node* newNode = this->createNewNode(node_data);
    
     if(this->head == NULL){
 		this->head = newNode;
 		return;
     } else {
        newNode->next = this->head;
        this->head = newNode;
     }    
}

void LinkedList::appendLast(int node_data){
	
    Node* newNode = this->createNewNode(node_data);
	
     if(this->head == NULL){
 		this->head = newNode;
 		return;
 	}

   // Add as the last
    Node * nextNode = this->head;
    for (; nextNode->next != NULL; nextNode = nextNode->next);

    nextNode->next = newNode;
 }


void LinkedList::displayList(){
	Node *nextNode = this->head;
    
    while(nextNode != NULL){
		cout<<nextNode->data<<"-->";
		nextNode = nextNode->next;
	}
    cout<<"NULL";
}


int main(void){
	LinkedList l = LinkedList();

    l.appendFirst(1);
    l.appendFirst(2);
    l.appendFirst(3);
    l.appendFirst(4);
    l.appendLast(2);
    l.appendLast(3);
    l.appendLast(4);
	
    l.displayList();

	return 0;
}
