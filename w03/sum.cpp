#include <stdio.h>

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
