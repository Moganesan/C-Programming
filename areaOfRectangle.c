#include <stdio.h>

int main(){
    double height,width;
    double area;
    printf("Enter Height: ");
    scanf("%lf",&height);
    printf("Enter Width: ");
    scanf("%lf",&width);
    area = height * width;
    printf("The area of the rectangle: %lf",area);
    return 0;
}