#include<stdio.h>
#inclde<conio.h>
#include<stdio.h>

int level=0,min=0,max=0,stack[10],top=-1;//level used to store no of levels of the Binary Tree//
struct node
{
 int data;
 struct node *Lchild, *Rchild;
};
struct node *ptr,*temp, *root=NULL, *pre=NULL, *t=NULL;
void Creat(int x)
{
prt=(struct node*)malloc(sizeof(struct node));
ptr->data=x;
ptr->Lchild=NULL;
ptr->Rchild=NULL;
}

void insert(struct node*rt,struct node*t)
{
    if(t->data < rt->data)
    {
        if(rt->Lchild=NULL)
        rt->Lchild=t;
        else
        Insert(rt->Lchild,t);
    }
    elseif(t->data > rt-> data)
    {
        if(rt->Rchild==NULL)
        rt->Rchild=t;
        else
        Insert(rt->Rchild,t);
    }
    else
    printf("Duplicate Data Not Allowed in Binary Search Tree.");
        return;
}
int Search(struct naode *t,int item)
{
    if(t!=NULL)
    {
        if(t->data==item)
        {
            return 0;
        }
        else if(item < t->data)
        {
         pre=t;
         return Search(t->Lchild,item);
        }
        else if(item > t->data)
        {
            pre=t;
            return Search(t->Rchild,item);
        }
    }
    
