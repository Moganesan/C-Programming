#include <stdio.h>


int main(){
    int number=0;
    int fact=1;
    printf("Enter the value :");
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
	    fact=fact*i;
    }
    printf("%d",fact);
    return 0;
}
