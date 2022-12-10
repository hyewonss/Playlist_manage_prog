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
        if(*phead==remove){
            *phead=(*phead)->next;
            free(remove);
        }
        else{
            while (ptr!=NULL){
                if (ptr==remove){
                    p->next=remove->next;
                    free(remove);
                    return;
                }
                p=ptr;
                ptr=ptr->next;
            }
        }
    }
}