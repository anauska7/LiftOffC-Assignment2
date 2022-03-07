#include<stdio.h>
int main()
{
    int se=0,so=0,n;
    printf("Enter 10 numbers\n");
    for (int i=0;i<10;i++)
    {
        scanf("%d",&n);
        if(n%2==0)
           se=se+n;
        else
           so=so+n;
    }
    printf("The sum of even numbers=%d\n",se);
    printf("The sum of odd numbers=%d\n",so);
    return 0;
}