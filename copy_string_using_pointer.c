//Write a C program to copy one string to another string and find length of new string using pointers.

#include<stdio.h>
void copy_string(char*,char*);
 void new_string_length(char*);
int main()
{
	char string1[20],string2[20]; 
    
   printf("Enter the string1\n");
   gets(string1);
   copy_string(string1,string2);
   printf("print string2 after copying from string1\n");
	// puts(string2);
	printf("%s",string2);
	new_string_length(string2);
}

 void copy_string(char *a1, char *a2)
 {    
   	while(*a1!='\0')
	{
		*a2=*a1;     //*a1= *1000->string1[0]
		a1++;
		a2++;
	}
   *a2='\0';
}
 void new_string_length(char *string)
 {   
   int i;
 	printf("\nlength of copied string is = ");
 	for(i=0;string[i]!='\0';i++);
 	{
 		printf("%d",i);
	}
 }

