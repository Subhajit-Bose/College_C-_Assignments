//Electricity Bill
#include<stdio.h>
int main()
{
    int u;
    float b;
    printf("Enter the electric units consumed: \n");
    scanf("%d",&u);
    if (u<=50)
        b = u*1.25;
    else if (u>50 && u<=100)
        b = 1.25*50 + 1.50*(u-50);
    else if (u>100 && u<=200)
        b= 1.25*50 + 1.50*50 + 2.00*(u-100);
    else if (u>200 && u<=300)
        b= 1.25*50 + 1.50*50 + 2.00*100 + 2.50*(u-200);
    else if(u>300)
        b= 1.25*50+ 1.50*50 + 2.00*100 + 2.50 *100 + 3.25*(u-300);
    printf("The electric bill = %.2f",b);
    return 0;
}