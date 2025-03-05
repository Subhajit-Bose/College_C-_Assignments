//Print summation of digits of a given number
#include<stdio.h>
int main()
{
    printf("Enter the number :\n");
    int n,sum=0,k;
    scanf("%d",&n);k=n;
    while (n!=0)
    {
        sum = sum + n%10;
        n=n/10;
    }
    printf("The sum of digits of the number %d is %d\n",k,sum);
    return 0;
}