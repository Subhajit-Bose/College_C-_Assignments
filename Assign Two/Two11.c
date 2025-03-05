// Disarium number
#include <stdio.h>
#include <math.h>
int main()
{
    int n, s = 0;
    printf("Enter the number to be checked for Disarium number: \n");
    scanf("%d", &n);
    int t = n, c = 0;
    while (t != 0)
    {
        c++;
        t = t / 10;
    }
    t = n;
    while (t != 0)
    {
        int d=1;
        for(int i=1;i<=c;i++)
        {
            d*=(t%10);
        }
        
        s=s+d;
        c--;
        t = t / 10;
    }
    
    if (s == n)
        printf("%d is a disarium number.", n);
    else
        printf("%d is not a disarium number.", n);
    return 0;
}