#include "file.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void display(node *head){
    int i=1;
    node *p=head;
    while (p!=NULL){
        printf("%d\n", i);
        printf("가수:%s\n", (p->data).artist);
        printf("곡:%s\n\n", (p->data).song);
        p=p->next;
        i++;
    }
}