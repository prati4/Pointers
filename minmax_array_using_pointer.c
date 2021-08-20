//Write a C program to sort an int array using pointers. [ increasing order / decreasing order]


#include<stdio.h>
void sort_array(int *,int);
int main()
{
	int array[20];
	int size,i;
	printf("Enter the size of array\n");
	scanf("%d",&size);

	printf("Enter the array elements\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&array[i]);
	}
	sort_array(array,size);
	
	printf("sort array elements\n");
	for(i=0;i<size;i++)
	{
		printf("%d ",*(array+i));
	}
}
void sort_array(int *array,int size)
{
	int i,j;
	for(i=0;i<size-1;i++)
{
	for(j=i+1;j<size;j++)
	{
		if(*(array+i) > *(array+j))
		{
			int temp;
			temp =*(array+i);
			*(array+i)= *(array+j);       // *a[0]>*a[1]
			*(array+j)=temp;
		}
	}
}

}






