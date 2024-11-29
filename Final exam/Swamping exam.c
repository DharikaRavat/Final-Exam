#include<stdio.h>

int main() {
   
    int a, b, name;
   
    printf("Enter the first variable (a): ");
    scanf("%d", &a);
   
    printf("Enter the second variable (b): ");
    scanf("%d", &b);
   
   
    name = a;  
    a = b ;
    b = name;

 
    printf("swapping: a = %d, b = %d\n", a, b);

    return 0;
}