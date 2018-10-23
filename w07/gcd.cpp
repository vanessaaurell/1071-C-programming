#include <stdio.h>

long rgcd(int a, int b)
{
    if(a==0) return b;
    else
        return rgcd(b%a, a);
}

long gcd(int a, int b)
{
    int c;
    while (a!=0){
     c=a; a=b%a;  b=c;
    }
  return b;
}

int main()
{
    printf("rgcd(48,126) = %d\n",rgcd(48,126));
    printf("gcd(48,126) = %d\n\n",gcd(48,126));

    printf("rgcd(48,128) = %d\n",rgcd(48,128));
    printf("gcd(48,128) = %d\n\n",gcd(48,128));

    printf("rgcd(48,144) = %d\n",rgcd(48,144));
    printf("gcd(48,144) = %d\n\n",gcd(48,144));

    printf("rgcd(48,84) = %d\n",rgcd(48,84));
    printf("gcd(48,84) = %d\n\n",gcd(48,84));
}
