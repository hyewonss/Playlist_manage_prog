#include "file.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//node *result1;
//node *resulst2;

void compare(node *head1, node *head2){
    node *p1=head1;
    node *p2=head2;
    element el;
    printf("비교할 곡명1:"); scanf("%s", el.song);
    while (p1!=NULL){
        if(!strcmp(p1->data.song, el.song)){
            p1->data.artist;
            printf("%s\n", (p1->data).artist);
            //*result1=*p1;
        }
        p1=p1->next;
    }
    printf("비교할 곡명2:"); scanf("%s",el.song);
    while (p2!=NULL){
        if(!strcmp(p2->data.song, el.song)){
            p2->data.artist;
            printf("%s\n", (p2->data).artist);
            //*resulst2=*p2;
        }
        p2=p2->next;
    }
    q=strcmp((p1->data).artist, (p2->data).artist);
}

void print_e(int q, void (*func)(node*, node*)){
    if (q==0)
        printf("Equal\n");
    else
        printf("Not Equal\n");
}