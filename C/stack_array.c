#include <stdio.h> 
#include <stdlib.h> 
struct Stack { 
	int top; 
	int capacity; 
	int* array; 
}; 
struct Stack* createStack(int capacity) 
{ 
	struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack)); 
	stack->capacity = capacity; 
	stack->top = -1; 
	stack->array = (int*)calloc(stack->capacity,sizeof(int)); 
	return stack; 
} 
int isFull(struct Stack* stack) 
{ 
	return stack->top == stack->capacity - 1; 
} 
int isEmpty(struct Stack* stack) 
{ 
	return stack->top == -1; 
} 
void push(struct Stack* stack, int item) 
{ 
	if (isFull(stack)) 
    {
        printf("Stack is full\n");
		return ; 
    }
	stack->array[++(stack->top)] = item; 
	printf("%d pushed to stack\n", item); 
} 
int pop(struct Stack* stack) 
{ 
	if (isEmpty(stack)) 
    {
        printf("Stack is empty\n");
		return;
    }
	return stack->array[stack->top--]; 
} 
int main() 
{ 
    int n,c,item;
    printf("Enter the capacity of stack : ");
    scanf("%d",&n);
	struct Stack* a = createStack(n);

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
                  push(a,item);
                break;
           case 2:printf("%d has been poped out of the stack\n",pop(a));             
                break;
           case 3:printf("Exiting stack process\n");
                break;
       }
    }while(c!=3);
	return 0; 
} 
