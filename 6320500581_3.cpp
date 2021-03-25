#include<stdio.h>
int main()
{
    int n,a=0,sum;
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        a++;
    }
    sum=(a-1)*9;
    printf("%d",sum);
}
