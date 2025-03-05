//Fibonacci sequence
#include<stdio.h>
int main()
{
    int n,a=0,b=1;
    printf("Enter the number of terms for fibonacci sequence: \n");
    scanf("%d",&n);
    printf("Fibonacci sequence for %d terms\n",n);
    for(int i=1;i<=n;i++)
    {
        printf("%d\n",a);
        a=a+b;
        b=a-b;
    }
    return 0;
}