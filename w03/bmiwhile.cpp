#include <stdio.h>
#include <math.h>
int main(){
	float BMI;
	float h, w;	
	printf("Enter your height:");
	scanf("%f",&h);
	printf("\nEnter your weight:");
	scanf("%f",&w);
	while (h>=0){
		h=h/100;
		BMI=w/pow(h,2);
		printf("Your BMI is %.1f\n",BMI);
		if(BMI<18.5)
			printf("You are underweight\n");
		else if(18.5<=BMI<24)
			printf("You are normal\n");
		else if(24<=BMI<27)
			printf("You are overweight\n");
		else if(27<=BMI<30)
			printf("You are low obesity\n");
		else if(30<=BMI<35)
			printf("You are middle obesity\n");
		else if(BMI>=35)
			printf("You are high obesity\n");
		printf("Enter your height:");
		scanf("%f",&h);
		printf("\nEnter your weight:");
		scanf("%f",&w);
}
}
