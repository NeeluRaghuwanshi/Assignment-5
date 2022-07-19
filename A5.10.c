
//table of any number
#include<stdio.h>
int main()
  {
     int i,t;
     printf("Enter a number\n");
     scanf("%d",&t);
     printf("Table of %d is :\n",t);
     for(i=1; i<=10; i++)
        {
           printf("%d\n",t*i);

        }
         return 0;
  }
