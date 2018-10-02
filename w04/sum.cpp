#include <stdio.h>

int sum(int n1, int n2); //function prototype

int main()
{
    int n1, n2;
    int total=0;
    printf("Enter n1 n2: ");
    scanf("%d %d",&n1,&n2);
    while(n1>=0 && n2>=0){
        total = sum(n1,n2);
        printf("sum(%d,%d) = %d\n",n1,n2,total);
        printf("Enter n1 n2: ");
        scanf("%d %d",&n1,&n2);
    }
    return 0;
}

int sum(int n1, int n2)
{
    int total=0;
    for(int i=n1;i<=n2;++i){
		total += i;
	}
	return total;
}




/*
int main(){
	int n1,n2;
	printf("Enter n1 n2:\n");
	scanf("%d %d",&n1,&n2);
	while(n1>=0,n2>=0){
		int sum=0;
	for(int i=n1;i<=n2;++i){
		sum+=i;
	}
	printf("Sum(%d,%d)= %d\n",n1,n2,sum);
	printf("Enter n1 n2:\n");
	scanf("%d %d",&n1,&n2);
		}
}
*/
