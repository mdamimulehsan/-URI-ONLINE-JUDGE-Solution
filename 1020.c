#include<stdio.h>
int main()
{
     int N,sec,min,hr;

     scanf("%d",&N);
     hr=N/365;
     min=N%365/30;
     sec=N%365%30;
     printf("%d ano(s)\n", hr);
     printf("%d mes(es)\n", min);
     printf("%d dia(s)\n", sec);
    return 0;
}
