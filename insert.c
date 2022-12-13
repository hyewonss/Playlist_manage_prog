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
        while (ptr!=NULL){  //마지막 노드의 주소값을 찾는 반복문
            p=ptr;
            ptr=ptr->next;
        }
        ptr=newnode;
        p->next=ptr;    //연결리스트의 끝에 newnode연결
    }
}