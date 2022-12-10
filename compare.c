#include "file.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char result1[30];
char result2[30];

int compare(node *head1, node *head2){
    node *p1=head1;
    node *p2=head2;
    element el1;
    element el2;
    printf("비교할 곡명1:"); scanf("%s", el1.song);
    while (p1!=NULL){
        if(!strcmp(p1->data.song, el1.song)){
            p1->data.artist;
            printf("%s\n", (p1->data).artist);
            strncpy(result1, p1->data.artist, sizeof(result1));
        }
        p1=p1->next;
    }
    printf("비교할 곡명2:"); scanf("%s",el2.song);
    while (p2!=NULL){
        if(!strcmp(p2->data.song, el2.song)){
            p2->data.artist;
            printf("%s\n", (p2->data).artist);
            strncpy(result2, p2->data.artist, sizeof(result2));
        }
        p2=p2->next;
    }
    return (!strcmp(result1, result2))? 1:0;
}

void print_e(node *head1, node *head2, int(*func)(node*, node*)){
    node *p1=head1;
    node *p2=head2;
    if (!func(p1,p2))
        printf("Equal\n");
    else
        printf("Not Equal\n");
}