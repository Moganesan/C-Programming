#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int count = 0;

//create a stack
struct stack{
	int items[MAX];
	int top;
};

typedef struct stack SK;

int createEmptyStack(SK *s){
	s->top = -1;
}

//check if the stack is empty
int isEmpty(SK *s){
	if(s->top == -1)
	   return 1;
	else
	   return 0;
}

//check if the stack is full
int isFull(SK *s){
	if(s->top == MAX - 1)
	   return 1;
	else
	   return 0;
}

//add new element into stack
int push(SK *s,int newItem){
	if(isFull(s)){
           printf("STACK IS FULL!");
	}
	else{
           s->top++;
	   s->items[s->top] = newItem;
	}
	count++;
}

//remove top element in stack
int pop(SK *s){
	if(isEmpty(s)){
           printf("STACK IS EMPTY");
	}else{
	   printf("Item popped = %d",s->items[s->top]);
	   s->top--;
	}
	count--;
	printf("\n");
}

//print elements of stack

void printStack(SK *s){
	if(isEmpty(s)){
	   printf("STACK IS EMPTY");
	}else{
	   printf("STACK: ");
	   for(int i=0; i<count; i++){
	      printf("%d",s->items[i]);
	   }
	   printf("\n");
	}
}

int main(){
   SK *s = (SK *)malloc(sizeof(SK));

   createEmptyStack(s);
   
   push(s,1);
   push(s,2);
   push(s,3);
   push(s,4);

   printStack(s);

   pop(s);

   printf("\nAfter popping out\n");
   printStack(s);
   return 0;
}
