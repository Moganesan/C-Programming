#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node *link;
};

int main(){
	struct Node *head = malloc(sizeof(struct Node));
	printf("%d",head->data);
	return 0;
}
