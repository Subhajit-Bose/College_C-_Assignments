#include <stdio.h>
#include <math.h>
int main(){
    int ch = 0,a,b,c;
    while (ch==0){
        printf("Enter the three sides of a triangle: ");
        scanf("%d%d%d",&a,&b,&c);
        if (a+b<c || a+c<b || b+c<a)
            printf("Enter again \n");
        else
            break;}
    float s = (a+b+c)/2;
    double ar = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of triangle= %lf",ar);
    return 0;}
