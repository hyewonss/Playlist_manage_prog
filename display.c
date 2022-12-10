#include "file.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int n;

int songnum(int j){
    return j;
}

void display(node *head){
    int(*pnum)(int n);
    pnum=songnum;
    int i=1;
    node *p=head;
    while (p!=NULL){
        printf("%d\n", i);
        printf("가수:%s\n", (p->data).artist);
        printf("곡:%s\n\n", (p->data).song);
        p=p->next;
        n=i;
        i++;
    }
    printf("총 %d곡 입니다.\n", pnum(n));
}