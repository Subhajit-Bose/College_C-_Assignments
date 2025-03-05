// Krishnamurthy Number
#include <stdio.h>
int main()
{
    int l, h;
    printf("Enter the range of numbers to generate Krishnamurthy numbers\n Higher and Lower\n");
    scanf("%d%d", &h, &l);
    printf("Krishnamurthy numbers in the given range: \n");
    for (int i = l; i <= h; i++)
    {
        int j = i, s = 0;
        while (j != 0)
        {
            int d = j % 10;
            int p = 1;
            for (int k = 1; k <= d; k++)
            {
                p = p * k;
            }
            s = s + p;
            j = j / 10;
        }
        if (i == s)
            printf("%d\n", i);
    }
    return 0;
}