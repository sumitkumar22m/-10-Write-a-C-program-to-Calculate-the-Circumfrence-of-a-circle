#include<stdio.h>
#include<conio.h>
void main()
{
    int radius;
    float a=22,b=7,pie;
    pie=a/b;
    printf("\t\tFind the Circumfrence of a circle\n");
    printf("Enter the Radius\n");
    scanf("%d",&radius);
    printf("%f",2*pie*radius);
    getch();
}
