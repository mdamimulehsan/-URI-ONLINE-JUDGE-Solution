#include<stdio.h>
int main()
{
     int N,sec,min,hr;

     scanf("%d",&N);
     hr=N/3600;
     min=N%3600/60;
     sec=N%60;
     printf("%d:%d:%d\n",hr,min,sec);
    return 0;
}