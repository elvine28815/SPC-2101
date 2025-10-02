/*
NAME:ELVINE BALA
REG NUMBER:PA106\G\28815\25
DESCRIPTION:PROGRAM TO DISPLAY WATER BILLING
*/

#include<stdio.h>
     int main(){
		 int units;
		 float total_water_bill;
		 int water_bill;
		 
     printf("Enter the number of units consumed: ");
     scanf("%d",&units);
     
     if(units  <= 30){
		 water_bill=20;}
     else if(units  >=31 && units <=60){
		 water_bill=25;}
    else if(units  >60){
		water_bill=30;}
		
		total_water_bill=water_bill*units;
		
   printf("The total_water_bill is %.2f  KES",total_water_bill);
    return 0;
	 }