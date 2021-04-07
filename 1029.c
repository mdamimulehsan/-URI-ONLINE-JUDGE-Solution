
#include<stdio.h>

int c;

int fib(int d)
{
    c++;
    if(d==0)
    {
        return 0;
    }
    else if(d==1)
    {
        return 1;
    }
    else
    {
        return fib(d-1)+fib(d-2);
    }
}

int main()
{
    int t, a, i;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        c=0;
        scanf("%d",&a);
        printf("fib(%d) = %d calls = %d\n",a, c-1, fib(a));
    }
    return 0;
}