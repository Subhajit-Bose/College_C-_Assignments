//Palindrome 
#include<stdio.h>
int main()
{
    int l,h;
    printf("Enter the lower limit and upper limit for the range of numbers to be taken :\n ");
    scanf("%d%d",&l,&h);
    printf("Palindrome numbers in the given range: \n");
    for (int i=l; i<=h; i++)
    {
        int j=i,r=0;
        while(j!=0)
        {
            r = r*10+(j%10);
            j=j/10;
        }
        if (r==i)
            printf("%d\n",i);

    }
    return 0;
}