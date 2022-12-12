#include "file.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

node *search_s(node *phead){
    node *ptr=phead;
    element el;
    int flag=1;
    printf("곡명 입력:");  scanf("%s", el.song);
    while (ptr){
        if (strcmp(ptr->data.song, el.song)==0){
            printf("가수명: %s ", ptr->data.artist);
            printf("곡명: %s\n", ptr->data.song);
            flag=0;
        }
        ptr=ptr->next;
    }
    if (flag){
        printf("NONE");
    }
}