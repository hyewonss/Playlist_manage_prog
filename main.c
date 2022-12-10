#include "file.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    node *head=NULL;
    node *head2=NULL;
    int num=0;
    int in=0;
    node *se;
    int i=0;

    FILE *fp=fopen("playlist.txt", "rt");
    if (fp==NULL){
        printf("Fail to read file..\n");
        return -1;
    }
    while(feof(fp)==0){
        char ch;
        ch=fgetc(fp);
        if(ch==':'){
            char artist[30];
            char song[20];
            if (i%2==0){
                fgets(artist, sizeof(artist), fp);
            }
            else if (i%2==1){
                int j=0;
                node *newnode=(node*)malloc(sizeof(node));
                newnode->next=NULL;
                fgets(song,sizeof(song),fp);
                for (j=0; j<30; j++){
                    if (artist[j]=='\n')
                        artist[j]=0;
                    if (song[j]=='\n')
                        song[j]=0;
                }
                strncpy(newnode->data.artist, artist, sizeof(newnode->data.artist));
                strncpy(newnode->data.song, song, sizeof(newnode->data.song));
                insert(&head, newnode);
            }
            i++;
        }
    }
    fclose(fp);

    while(1){
        printf("******MENU******\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Search by artist\n");
        printf("4. Print playlist & song number\n");
        printf("5. Same song?\n");
        printf("6. Exit\n");
        printf("Choose:");
        scanf("%d", &num);

        switch (num){
            case 1:
                insert(&head, createnode());
                break;
            case 2:
                delete(&head, search(head));
                break;
            case 3:
                se=search(head);
                if (se!=NULL){
                    printf("가수명: %s ", se->data.artist);
                    printf("곡명: %s\n", se->data.song);
                }
                else{
                    printf("NONE");
                    printf("\n");
                }
                break;
            case 4:
                display(head);
                break;
            case 5:
                print_e(head, head2, compare);
                break;
            default:
                writefile(head);
                break;
        }
        if (num==6) break;
    }
    return 0;
}