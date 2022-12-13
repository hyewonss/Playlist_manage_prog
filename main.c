#include "file.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    node *head=NULL;    //헤드포인터 선언
    int num=0;
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
/*파일의 내용에서 :를 이용해서 다음에 나오는 문자열을 artist, song에 차례대로 넣는다.
만들어 놓은 새로운 노드에 artist, song을 입력시키고 이 새로운 노드로 연결리스트를 구성한다.*/
    while(1){
        printf("******MENU******\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Search by song\n");
        printf("4. Search by artist\n");
        printf("5. Print playlist & song number\n");
        printf("6. Same artist?\n");
        printf("7. Exit\n");
        printf("Choose:");
        scanf("%d", &num);

        switch (num){     //메뉴선택
            case 1:
                insert(&head, createnode());
                break;
            case 2:
                delete(&head, search(head));
                break;
            case 3:
                search_s(head);
                break;
            case 4:
                search_a(head);
                break;
            case 5:
                display(head);
                break;
            case 6:
                print_e(head,compare);
                break;
            default:
                writefile(head);
                break;
        }
        if (num==7) break;
    }
    return 0;
}