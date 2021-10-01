#include <stdio.h> 
#include <stdlib.h> 
struct StackNode { 
	int data; 
	struct StackNode* next; 
}; 
struct StackNode* newNode(int data) 
{ 
	struct StackNode* stackNode = (struct StackNode*)malloc(sizeof(struct StackNode)); 
	stackNode->data = data; 
	stackNode->next = NULL; 
	return stackNode; 
} 
int isEmpty(struct StackNode* root) 
{ 
	return !root; 
} 
void push(struct StackNode** root, int data) 
{ 
	struct StackNode* stackNode = newNode(data); 
	stackNode->next = *root; 
	*root = stackNode; 
	printf("%d pushed to stack\n", data); 
} 
int pop(struct StackNode** root) 
{ 
	if (isEmpty(*root)) 
		return;
	struct StackNode* temp = *root; 
	*root = (*root)->next; 
	int popped = temp->data; 
	free(temp); 
	return popped; 
} 
int main() 
{ 
	int c,item;
	struct StackNode* root = NULL; 
	 do
    {
       printf("\n********STACK MENU********\n");
       printf("Enter 1 for pushing into the stack\n");
       printf("Enter 2 for poping out of the stack\n");
       printf("Enter 3 for exit\n");
       scanf("%d",&c);
       switch(c)
       {
           case 1:printf("Enter data that you want to push :");
                  scanf("%d",&item);
                  push(&root,item);
                break;
           case 2:printf("%d has been poped out of the stack\n",pop(&root));             
                break;
           case 3:printf("Exiting stack process\n");
                break;
       }
    }while(c!=3);
	return 0; 
} 
