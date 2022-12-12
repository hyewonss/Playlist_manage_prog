#include "file.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

node *search_s(node *phead){
    node *ptr=phead;
    element el;
    printf("곡명 입력:");  scanf("%s", el.song);
    while (ptr!=NULL){
        if (!strcmp(ptr->data.song, el.song)) 
            return ptr;
        ptr=ptr->next;
    }
    return NULL;
}