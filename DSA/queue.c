#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int items[SIZE], front = -1, rear = -1;

void enQueue(int x){
	if(rear == SIZE - 1){
		printf("Queue is Full");
	}else{
	  if(front == -1)
		front = 0;
	  rear++;
	  items[rear] = x;
          printf("\n Inserted -> %d",x);
	}
}

void deQueue(){
	if(front == -1){
		printf("\nQueue is Empty!!");
	}else{
		front++;
		if(front>rear)
			front = rear -1;
	}
}

void display(){
	if(rear == -1)
		printf("\n Queue is Empty!!!");
	else{
		int i;
		for(i=front; i<=rear; i++)
			printf("\n%d", items[i]);
	}
	printf("\n");
}

int main(){
	deQueue();
	enQueue(1);
	enQueue(5);
	enQueue(6);
	enQueue(7);
	enQueue(2);

	display();
	return 0;
}
