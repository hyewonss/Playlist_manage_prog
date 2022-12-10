#include "file.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void writefile(node *phead){
    node *ptr=phead;
    int i='1';
    FILE *fp=fopen("playlist.txt", "wt");

    if (ptr==NULL)
        return ;
    else{
        while (ptr!=NULL){
            fputc(i,fp); fputs("\n", fp);
            fputs("가수:", fp); fputs(ptr->data.artist, fp); fputs("\n", fp);
            fputs("곡:", fp); fputs(ptr->data.song, fp); fputs("\n", fp);
            ptr=ptr->next;
            i++;
        }
    }
    fclose(fp);
    return ;
}