#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct slink
{
    int no;
    struct slink*next;
    
    } *ptr,*start,*new,*end;
    void main()
    {
        int i=0;
        char ch='y';
        while((ch='y') || (ch='Y'))
        {
            new = (struct slink*) malloc(sizeof(struct slink));
        printf("enter the number");
        
        scanf("%d",&new->no);
        if(start==NULL)
        {
            start=new;
        }
        else{
            end->next=new;
        }
        end=new;
        end->next==NULL;
        }
        for(ptr=start;ptr;ptr->next)
        printf("%d",ptr->no);
    }