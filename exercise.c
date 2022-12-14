// Exercises
// (Arithmetic, Largest value and Smallest Value) Write a program that inputs
// three different integers from the keyboard, then prints the sum, the average,
// the product, the smallest, and the largest of these numbers. Use only the
// single selection form of the if statement you learned in this chapter. The
// screen dialog should appear as follows:
//
// Input three different integers: 13 27 14
// Sum is 54
// Average is 18
// Product is 4914
// Smallest is 13
// Largest is 27
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,num3,smallest,largest;

    printf("Input three different integers: ");
    scanf("%d%d%d",&num1,&num2,&num3);

    printf("Sum is %d\n",num1+num2+num3);

    printf("Average is %d\n",(num1+num2+num3)/3);

    printf("Product is %d\n",num1*num2*num3);

    smallest=num1;

    if(num2<smallest){
        smallest=num2;
    }
    if(num3<smallest){
        smallest=num3;
    }
    printf("Smallest is %d\n",smallest);

    largest=num1;

    if(num2>largest){
        largest=num2;
    }
    if(num3>largest){
        largest=num3;
    }
    printf("Largest is %d\n",largest);

    return 0;
}
