#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the number: A B\n");
    printf("enter a :");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    if(a>b)
    {
        printf("a is greater");
    }
    else if(a==b)
    {
        printf("a,b is equal");
    }
    else
    {
        printf("b is greater");
    }
}
