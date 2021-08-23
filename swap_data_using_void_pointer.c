//WAP for swapping between any data type using swap(void *a,void *b)

#include<stdio.h>
void swap(void * a, void *b, int size)
{
	void *temp= malloc(size);
	memcpy(temp,a,size);
	memcpy(a,b,size);
	memcpy(b,temp,size);
	free(temp);
}
int main()
{ 
    int num1 =4;
	 int num2 =3;
	 swap (&num1, &num2, sizeof(int));
	 printf("num1=%d, num2=%d \n",num1,num2);
	 char name1[20]=" hello";
	 char name2[20]="world";
	 swap(name1,name2,sizeof(name1));
	 printf("name1=%s  name2=%s \n",name1,name2);
	 return 0;
}
