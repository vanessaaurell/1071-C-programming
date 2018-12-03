#include <stdio.h>
#include <stdlib.h>

void swap(int *pa, int *pb)
{
    int temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
    printf("swap: %d %d\n",*pa,*pb);
}

int main()
{
    int pa=10, pb=20;
    printf("main: %d %d\n",pa,pb);
    swap(&pa,&pb);
}
