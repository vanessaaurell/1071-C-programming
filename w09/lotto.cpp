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

struct Lotto
{
    Date date;
    int num[6];
};

int main()
{
    Lotto lotto;
    Lotto lottos[MAX];

    int n;
    printf("Enter N: ");
    scanf("%d", &n);
    printf("\n");

    for(int i=0; i<n; i++){
        lottos[i].date.year = rand()%11+2010;
        lottos[i].date.month = rand()%12+1;
        lottos[i].date.day = rand()%31+1;
        printf("%d/%02d/%02d\t", lottos[i].date.year, lottos[i].date.month,lottos[i].date.day);
        for(int j=0;j<6;j++){
            lottos[i].num[j] = rand()%49+1;
            printf("%02d ",lottos[i].num[j]);
        }
        printf("\n");
    }

    /*srand(time(NULL));
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
    */
}
