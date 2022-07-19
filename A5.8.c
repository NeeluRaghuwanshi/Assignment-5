//squares of first N natural numbers

#include<stdio.h>
int main()
   {
     int i,n;
     printf("Enter a number\n");
     scanf("%d",&n);
     printf("Squares of first %d natural numbers are :\n",n);
     for(i=1;i<=n;i++)
        {

          printf("%d\n",i*i);

        }
        return 0;
   }
