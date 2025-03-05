//Armstrong numbers
#include<stdio.h>
#include<math.h>
int main()
{
    int l,h;
    printf("Enter the range of numbers to be checked, lower and higher : \n");
    scanf("%d%d",&l,&h);
    printf("Armstrong numbers are: \n");
    for (int i=l; i<=h;i++)
    {
        int j=i,c=0;float s=0;
        while(j!=0)
        {
            j=j/10;
            c++;
        }
        j=i;
        while(j!=0)
        {
            s= s+pow(j%10,c);
            j=j/10;
        }
        if (s==i)
            printf("%d\n",i);
    }
    return 0;
}