#include "file.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(node *head){
    node *p1=head;
    element el;
    printf("비교할 가수명:"); scanf("%s", result);
    printf("비교할 곡명:"); scanf("%s", el.song);
    while (p1!=NULL){
        if(!strcmp(p1->data.song, el.song)){
            p1->data.artist;
            printf("%s\n", (p1->data).artist);
            strncpy(result1, p1->data.artist, sizeof(result1));
        }
        p1=p1->next;
    }
    return (!strcmp(result, result1))? 0:1;
}

void print_e(node *head, int(*func)(node*)){
    node *p=head;
    if (!func(p))
        printf("Equal\n");
    else
        printf("Not Equal\n");
}