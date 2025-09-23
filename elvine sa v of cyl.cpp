/*
Name:Elvine Bala Adidwa
Reg  no:PA106/G/28815/25
Description:Program to  display the volume and the surface area of a cylinder
*/
//main function

#include <stdio.h>//preprocessor directive;scanf[],printf[]

int main(){
      
      float pi,radius,height,volume;
      printf("Enter radius:");
      scanf("%f",&radius);
      
      printf("Enter pi :");
      scanf("%f",&pi);

      printf("Enter height:");
      scanf("%f",&height);
      
     volume =pi*radius*radius*height;
      
      printf("\n volume is  %f\n",volume);
      
      float pie,radii,heightt,surfacearea;
      printf("Enter pi:");
      scanf("%f",&pi);
    
      printf("Enter radius;");
      scanf("%f",&radius);
      
      printf("Enter height;");
      scanf("%f",&height);
      
      surfacearea=(2*pi*radius*radius)+(2*pi*radius*height);
      
      printf("/n surfsace area is %f",surfacearea);
      
return 0;
}