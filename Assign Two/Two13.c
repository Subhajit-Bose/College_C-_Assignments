// Volume calculator
#include <stdio.h>
#include <math.h>
int main()
{
    int c = 1;
    while (c != 0)
    {
        int ch;
        printf("Enter your choice for calculating volume \n 1.Sphere \n 2.Cylinder \n 3.Cone \n 4.Cuboid\n");
        scanf("%d", &ch);
        float volume;
        switch (ch)
        {
        case 1:
        {
            int r;
            printf("Enter the radius of sphere:\n ");
            scanf("%d", &r);
            volume = (4.0 / 3.0) * 3.14 * r * r * r;
            break;
        }
        case 2:
        {
            int r, h;
            printf("Enter the radius and height of the cylinder respectively: \n");
            scanf("%d%d", &r, &h);
            volume = 3.14 * r * r * h;
            break;
        }
        case 3:
        {
            int r, h;
            printf("Enter the radius and height of the cone respectively: \n");
            scanf("%d%d", &r, &h);
            volume = (1.0 / 3.0) * 3.14 * r * r * h;
            break;
        }
        case 4:
        {
            int l, b, h;
            printf("Enter the length, breadth and height of the cuboid respectively: \n");
            scanf("%d%d%d", &l, &b, &h);
            volume = l * b * h;
            break;
        }
        default:
        {
            printf("Wrong choice....Enter again\n");
            continue;
        }
        }
        printf("The volume = %f\n", volume);
        printf("Enter 0 to continue the operation\n");
        int t;
        scanf("%d", &t);
        if (t == 0)
            continue;
        else
            break;
    }
    return 0;
}