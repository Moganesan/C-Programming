#include <stdio.h>

int sumOfArray(int a[],int size){
    int i=0;
    int sum=0;
    for(i;i<size;i++){
        sum+=a[i];
    }
    return sum;
}

int Double(int* array,int size){
    int i=0;
    for(i;i<size;i++){
      array[i] = 2*array[i];
    }
}

int add(int a,int b){
    return a+b;
}

int main(){
    int array[]={1,2,3,4,5,6};
    int sizeOfArray = sizeof(array)/sizeof(array[0]);
    int sum = sumOfArray(array,sizeOfArray);
    // printf("%d",sum);
    // Double(array,sizeOfArray);
    // sum=sumOfArray(array,sizeOfArray);
    // for(int i=0;i<sizeOfArray;i++){
    //     printf("%d\n",array[i]);
    // }
    int (*p)(int,int);
    p=&add;
    int c= p(2,5);
    printf("%d",c);
    return 0;
}