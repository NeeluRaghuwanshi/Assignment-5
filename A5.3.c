//first N natural numbers in reverse order
#include<stdio.h>
int main()
   {
      int i,n;
      printf("Enter a number\n");
      scanf("%d",&n);
     printf("first %d natural numbers in reverse order :\n",n);
     for(i=n; i>=1; i--)
        {
          printf("%d\n",i);

        }
        return 0;
   }
