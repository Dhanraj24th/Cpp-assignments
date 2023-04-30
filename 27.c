#include<stdio.h>
int main(){
    int num=10;
   int size=5;
for (int i = 0; i < size; i++)
{
    for (int j = 0; j < i; j++)
    {
         printf(" ");
    }
         if (i!=size)
    {
          for(int k=0;k<2*(size-i)-1;k++)
    {
        printf("*");
    }
     
    }
    
    
      printf("\n");
}

for (int l = 0; l < size; l++)
{
    for (int m = 0; m<size-l-1 ; m++)
    {
        printf(" ");
    }
    for ( int n = 0; n< (2*l)+1; n++)
    {
      
     printf("*");
    }
        printf("\n");
    }
    


 return 0;
}
