/*
Name:Elvine Bala Adidwa
Regestration no:PA106/G/28815/25
Description:Program for eligibility for bank loan
*/
//main function

#include <stdio.h>//preprocessor directive;scanf(),printf()

int main(){
	int age;
	float income;
	
	
	printf("Enter your income:");
	scanf("%f",&income);
	
	
	printf("Enter your age:");
	scanf("%d",&age);
	
	
	if (income>=21000&age>=21){
		printf("congratulations you qualify for a loan.\n");
	}else
	{
		printf("unfortunately we are unable to offer you a loan now.\n");
	}
	
	
	return 0;
}