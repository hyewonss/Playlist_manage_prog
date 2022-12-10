#include "file.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

node *compare(node *head11, node *head22){
    node *head1; 
    node *head2;
    node *p1=head1;
    node *p11=head11;
    node *p2=head2;
    node *p22=head22;
    element el;
    printf("비교할 곡명1:"); scanf("%s", el.song);
    while (p1!=NULL){
        if(!strcmp(p1->data.song, el.song)){
            p11->data.artist;
            return p11;
        }
        p1=p1->next;
    }
    printf("비교할 곡명2:"); scanf("%s",el.song);
    while (p2!=NULL){
        if(!strcmp(p2->data.song, el.song)){
            p22->data.artist;
            return p22;
        }
        p2=p2->next;
    }
}
void print(node *p11, node *p22, node* (*func)(node*, node*)){
    if (func(p11, p22))
        printf("Equal\n");
    else   
        printf("Not Equal\n");
}