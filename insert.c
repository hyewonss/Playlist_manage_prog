#include "file.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void insert(node **phead, node *newnode){
    node *ptr=*phead;
    node *p;
    if (*phead==NULL){
        (*phead)=newnode;
        newnode->next=NULL;
    }
    else{
        while (ptr!=NULL){
            p=ptr;
            ptr=ptr->next;
        }
        ptr=newnode;
        p->next=ptr;
    }
}