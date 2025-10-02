/*
NAME:ELVINE BALA
REG:PA106/G/28815/25
DESCRIPTION:PROGRAM FOR DISPLAYING EXAM ELIGIBILITY
*/

#include<stdio.h>
      int main(){
		  float attendance;
		  int average_marks;
		  
     printf("\n Enter your attendance: ");
	 scanf("%f",&attendance);
	 
	 printf("\n Enter your average_marks: ");
	 scanf("%d",&average_marks);
	 
	 if(attendance>=0.75 && average_marks>=40){
		 printf("\n You are eligible for the exams");
	 }else {
		 printf("\n You are not eligible for the exams");	 
	 }	
	 return 0;  
	  }