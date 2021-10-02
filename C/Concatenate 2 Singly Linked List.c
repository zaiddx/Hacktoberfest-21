# include<stdio.h>
# include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};
struct node *concatenate(struct node *head1, struct node *head2)
{
    struct node *p1=head1;
    while(p1->link!=NULL)
        p1=p1->link;
    p1->link=head2;
    return head1;
}
struct node *insert_node_end(int data, struct node *head)
{
    struct node *temp, *p=head;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        while(p->link!=NULL)
        {
            p=p->link;
        }
        p->link=temp;
    }
    return head;
}
int main()
{
    int n1, n2, i;
    struct node *head1=NULL, *head2=NULL;
    printf("Enter the number of nodes you want to enter in first list\n");
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
    {
        int info;
        printf("Enter the data you want to enter\n");
        scanf("%d",&info);
        head1=insert_node_end(info,head1);
    }
    printf("Enter the number of nodes you want to enter in second list\n");
    scanf("%d",&n2);
    for(i=0;i<n2;i++)
    {
        int info;
        printf("Enter the data you want to enter\n");
        scanf("%d",&info);
        head2=insert_node_end(info,head2);
    }
    head1=concatenate(head1, head2);
    printf("Concatenated list is as follows\n");
    struct node *p1=head1;
        while(p1!=NULL)
        {
            printf("%d ",p1->data);
            p1=p1->link;
        }
}

