/*
 * LinkedList.h
 *
 *  Created on: May 25, 2016
 *      Author: kevin
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_


#include <string>
#include<iostream>

using namespace std;

class LinkedList {
private:
    typedef struct node{
        string data;
        node* next;
        //-----------
        int posc=0;
    }* nodePtr;

    nodePtr head;
    nodePtr current;
    nodePtr temp;

public:
    LinkedList();
    void addNode(string addData);
    void deleteNode(string delData);
    void PrintList();
    //-------------------------------
    string getNodeString(int x);

};

#endif /* LINKEDLIST_H_ */
