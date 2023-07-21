#include<stdio.h>
//int fun();

int main()
{
    int i,j;
    for(i=0;i<(i++,5);i++)
    {
        printf("\n%d",i);
    }
    return 0;
}
/*int fun()
{
    static int num=10;
    return num--;
}*/
