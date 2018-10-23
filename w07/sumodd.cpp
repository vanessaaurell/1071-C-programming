#include <stdio.h>

//n is odd
// sumodd1(n) = 1+3+5+...(2n-1)
// sumodd2(n) = 1+3+5+...n

int sumodd1 (int n)
{
    int total=0;
    for(int i=1; i<=2*n-1; i++)
    {
        if(i%2==1)
            total += i;
    }
    return total;
}

int sumodd2(int n)
{
    int total=0;
    for(int i=1; i<=n; i++)
    {
        if(i%2==1)
            total += i;
    }
    return total;
}

int main()
{
    while(true){
    int n;
    printf("\nEnter n: ");
    scanf("%d",&n);
    printf("sumodd1(%d)=%d\n",n, sumodd1(n));
    printf("sumodd2(%d)=%d\n",n, sumodd2(n));
    }
}
