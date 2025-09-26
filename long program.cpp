// Program of myself
/*
Name:Elvine Bala
Reg no:PA106/G/28815/25
Description:Program to display my height,id number, bank balance and home county
*/
#include <stdio.h>//Preproccesor directive : scanf(),printf()

//main function
int main(){
	int height;
	int long long  Id_number;
	int bank_balance;
	int long long home_county;
	
	printf("Enter your height:");
	scanf("%d",&height);
	printf("Your height is %d\n",height);
	
	printf("Enter your id number:");
	scanf("%lld",Id_number);
	printf("Your Id_number is %lld\n",Id_number);
	
	printf("Enter your bank balance:");
	scanf("%d",bank_balance);
	printf("Your bank_balance is %d\n",bank_balance);
	
	printf("Enter your home county:");
	scanf("%lld",home_county);
	printf("Your home_county is %lld\n",home_county);
	
	return 0;

}
