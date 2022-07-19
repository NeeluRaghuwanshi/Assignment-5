// first N even natural numbers in reverse order
#include<stdio.h>
int main()
     {

    int i,n;
    printf("Enter a number\n");
    scanf("%d",&n);
     printf("first %d even natural numbers in reverse order:\n",n);
     for(i=n; i>=1; i--)
        {
          printf("%d\n",2*i);

        }
        return 0;

 }
