#include<stdio.h>
typedef struct node
{
    int data;
    struct node *link;
}NODE;
NODE *start=NULL;
void push(int);
int pop();
main()
{
     int num,option,a;
     do
        {
            printf("to push enter option 1\nto pop enter option 2\nto exit enter option 0\n");
            printf("enter the option ");
            scanf("%d",&option);
            switch(option)
            {
                case 1 : printf("enter the element to push\n");
                        scanf("%d",&num);
                        push(num);
                        break;
                case 2 : a=pop();
                        printf("the pop element is %d",a);
                        break;
            }

        }while(option!=0);


}
void push(int x)
{
    NODE *temp,*new;
    new=(NODE *)malloc(sizeof(NODE));
    new->data=x;
    if(start==NULL)
    {
        start=new;
        new->link=NULL;
    }
    else
    {
        temp=start;
        while(temp->link!=NULL)
        temp=temp->link;
        temp->link=new;
        new->link=NULL;
    }
}
int pop()
{
    int y,d=0;
    NODE *ptr,*preptr;
    ptr=start;
    while(ptr->link!=NULL)
    {
        preptr=ptr;
        ptr=ptr->link;
        d++;
    }
    y=ptr->data;
    if(d==0)
    {
        start=NULL;
    }
    else
    {
        preptr->link=NULL;
        return y;
    }
}


