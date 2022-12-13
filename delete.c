#include "file.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void delete(node **phead, node *remove){
    node *ptr=*phead;
    node *p;
    if (ptr==NULL)
        return ;
    else{
        if(*phead==remove){    //첫번째 노드 삭제할 때
            *phead=(*phead)->next;
            free(remove);
        }
        else{
            while (ptr!=NULL){
                if (ptr==remove){
                    p->next=remove->next;   //remove 노드를 연결리스트에서 제외
                    free(remove);
                    return;
                }
                p=ptr;
                ptr=ptr->next;
            }
        }
    }
}