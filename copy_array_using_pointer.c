//Write a C program to copy one array to another using pointers.

#include<stdio.h>
int main()
{
	int array1[20],array2[20];
	int size,i;
	int *a1,*a2;
  
//	a1=array1;  
  a1=&array1[0];
//	a2=array2;   
  a2=&array2[0];
	
	printf("Enter the size of array\n");
	scanf("%d",&size);
//	int *end_ptr = &array1[size-1];

	printf("Enter the array elements\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&array1[i]);
	}

	//while(a1 <= end_ptr)      
	while(*a1)
	{
		*a2=*a1;     ////*a1= *1000->array1[0]
		a1++;
		a2++;
	}
	
	printf("print array2 elements\n");
	for(i=0;i<size;i++)
	{
		printf("%d ",array2[i]);
	}
	
	return 0;
}
