/*
 * xList.h
 *
 *  Created on: May 24, 2016
 *      Author: kevin
 */

#ifndef XLIST_H_
#define XLIST_H_

#include <iostream>
#include <string>


using namespace std;

class xList {
public:
    struct node {
        int id;
        string* text;
        struct node *next;
    } *head, *tail, *ptr;
    xList():head(NULL),tail(NULL){}	// constructor
    ~xList();			// destructor


    struct xList::node* searchId(struct xList::node*, int);
    struct xList::node* initNode(string* , int);

    void addNode( struct xList::node*);
    void insertNode( struct xList::node*);
    void deleteNode( struct xList::node*);
    void displayList( struct xList::node*)const ;
    void displayNode( struct xList::node*) const;
};


#endif /* XLIST_H_ */
