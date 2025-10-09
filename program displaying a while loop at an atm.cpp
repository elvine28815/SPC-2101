/*
NAME;ELVINE BALA
REG NO;PA106/G/28815/25
DESCRIPTION:PROGRAM DISPLAYING A WHILE LOOP AT AN ATM
*/
#include <stdio.h>
int main(){
	int balance,withdraw;
	
	printf("Enter your starting balance:");
	scanf("%d",&balance);
	
	while(balance>0){
		printf("\n Enter amount to withdraw:");
		scanf("%d",&withdraw);
		
		balance=balance-withdraw;
		printf("Remaining balance: %d\n",balance);
		
		if (balance<= 0){
			printf("\n Your account balance is insufficient\n");
		}
	}
	printf("\n Transaction is complete.Account balance:%\n",balance);
	
	return 0;
}