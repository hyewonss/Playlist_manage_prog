#include "file.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

node *search_a(node *phead){
    node *ptr=phead;
    element el;
    printf("가수명 입력:");  scanf("%s", el.artist);
    while (ptr!=NULL){
        if (!strcmp(ptr->data.artist, el.artist)) 
            return ptr;
        ptr=ptr->next;
    }
    return NULL;
}