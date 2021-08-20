//Write a C program to swap two numbers using pointers

#include<stdio.h>
int swap_num(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	
}
int main()
{
	int num1,num2;
	printf("Enter the number\n");
	scanf("%d %d",&num1,&num2);
	swap_num(&num1,&num2);;
	printf("after swapping number num1 = %d and num2 = %d",num1,num2);
	return 0 ;
}
