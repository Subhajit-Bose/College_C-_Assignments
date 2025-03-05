#include<stdio.h>
int main() 
{
    int n,c=0;
    printf("Enter the number to be checked :\n");//Prime or Composite
    scanf("%d",&n);
    for (int i=2;i<(n/2);i++)
    {
        if(n%i == 0)
            c++;
    }
    if (c==0)
        printf("The number is prime");
    else 
        printf("The number is composite");
    return 0;
}