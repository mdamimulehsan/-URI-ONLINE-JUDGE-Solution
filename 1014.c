#include<stdio.h>
int main()
{
    int a;
    float b,sum;

    scanf("%d%f",&a,&b);

    sum=a/b;
    printf("%.3f km/l\n",sum);

    return 0;
}