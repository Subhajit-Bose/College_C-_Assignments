#include<stdio.h>
int main()
{
    int m;
    char G;
    printf("Enter the marks scored by the students: \n");
    scanf("%d",&m);
    if(m>=90)
        G='O';
    else if(m<90 && m>=80)
        G='E';
        else if(m<80 && m>=70)
        G='A';
        else if(m<70 && m>=60)
        G='B';
        else if(m<60 && m>=50)
        G='C';
        else if(m<50 && m>=40)
        G='D';
        else 
        G='F';
    printf("The grade = %c",G);
    return 0;
}