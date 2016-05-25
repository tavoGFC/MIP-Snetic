/*
 * LinkedList.cpp
 *
 *  Created on: May 25, 2016
 *      Author: kevin
 */

#include "LinkedList.h"

LinkedList::LinkedList() {
    head=NULL;
    current=NULL;
    temp=NULL;
}

void LinkedList::addNode(string addData) {
    nodePtr n = new node;
    n->next = NULL;
    n->data = addData;

    if (head!=NULL){
        current = head;
        while(current->next != NULL){
            current= current->next;
        }
        current->next=n;
    }
    else{
        head=n;
    }
}

void LinkedList::deleteNode(string delData){
    nodePtr delPtr =NULL;
    temp=head;
    current=head;
    while(current!= NULL && current->data !=delData){
        temp=current;
        current=current->next;
    }
    if(current==NULL){
        cout<<" was not in the list\n";
        delete delPtr;
    }
    else{
        delPtr=current;
        current=current->next;
        temp->next=current;
        if(delPtr == head){
            head=head->next;
            temp=NULL;
        }
        cout<<"The value " << delData << "was deleted\n";
    }
}
void LinkedList::PrintList() {
    current=head;
    while(current!=NULL){
        cout<<current->data<<endl;
        current=current->next;
    }

}

