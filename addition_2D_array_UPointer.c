//Write a C program to add 2D array using pointers

#include<stdio.h>

int main()

{
   
 int a[2][2],b[2][2],c[2][2];
   
 int i,j,m,n;
  
  printf("enter order of matrix :");
    
scanf("%d%d",&m,&n);
   
 printf("enter elements of first  matrix :");
  
  for(i=0;i<m;i++)
   {
        for(j=0;j<n;j++)
   {
      scanf("%d",(*(a+i)+j));
     //(*(a+i)j)=a[i][j]
   }
    
}

printf("enter elements of second matrix :");

for(i=0;i<m;i++)
  
  {
     
   for(j=0;j<n;j++)
     
   {
           
 scanf("%d",(*(b+i)+j));
      
  }
   
 }
    
printf("addition of two matrix :\n");
      
  for(i=0;i<m;i++)
   
 {
      
  for(j=0;j<n;j++)
       
 {
    
   *(*(c+i)+j)=*(*(a+i)+j)+ *(*(b+i)+j);
      
 printf("%d\t", *(*(c+i)+j));
   
    	 }
   
 	}
}
