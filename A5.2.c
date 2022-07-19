//first N natural numbers
#include<stdio.h>
int main()
   {
     int i,n;
     printf("Enter a number\n");
     scanf("%d",&n);
     printf("first %d natural numbers :\n",n);
     for(i=1; i<=n; i++)
        {
          printf("%d\n",i);

        }
        return 0;
   }
