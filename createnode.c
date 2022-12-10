#include "file.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

node *createnode(void){
    node *newnode=(node*)malloc(sizeof(node));
    printf("가수 입력:");  scanf("%s", (newnode->data).artist);
    printf("곡 입력:");  scanf("%s", (newnode->data).song);
    newnode->next=NULL;
    return newnode;
}