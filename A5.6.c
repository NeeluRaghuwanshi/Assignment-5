// first N even natural numbers
#include<stdio.h>
int main()
     {

    int i,n;
    printf("Enter a number\n");
    scanf("%d",&n);
     printf("first %d even natural numbers :\n",n);
     for(i=1; i<=n; i++)
        {
          printf("%d\n",2*i);

        }
        return 0;

 }
