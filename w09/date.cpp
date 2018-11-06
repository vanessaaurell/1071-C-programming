#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100

struct Date
{
    int year;
    int month;
    int day;
};

int main()
{

    srand(time(NULL));
    Date date;
    Date dates[MAX];
    int year,month,day;
    int n;

    printf("Enter N: ");
    scanf("%d", &n);
    printf("\n");

    for(int i=0; i<n; i++){
        year =  rand()%11+2010;
        month = rand()%12+1;
        day = rand()%31+1;
        dates[i].year = year;
        dates[i].month = month;
        dates[i].day = day;
    }

    for(int i=0; i<n; i++)
    {
        printf("%d/%02d/%02d\n", dates[i].year, dates[i].month,dates[i].day);
    }

    return 0;
}
