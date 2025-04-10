#include<stdio.h>
#include<conio.h>

int main() {
    int num1, num2,sum;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    sum = num1 + num2;
    
	printf("Enter the first number: %d ", num1);
	printf("Enter the second number: %d ", num2);
    	printf("The sum of %d and %d is %d.", num1, num2, sum);
    
    return 0;
}
