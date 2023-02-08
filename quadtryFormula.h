#include <stdio.h>
#include <stdio.h>
#include <math.h>h  k
int main(){

     float a,b,c,root_1,root_2,denominator;

     printf("to find the root of a quadratic equation\n");
     printf("enter values of a: ");
     scanf("%f",&a);

     printf("enter values of b: ");
     scanf("%f",&b);

     printf("enter values of c: ");
     scanf("%f",&c);


     denominator=b*b-(4*a*c);

     if(denominator==0)
     {
     printf("the root are real and equal\n");

     root_1=-b/(2*a);
     root_2=-b/(2*a);

      printf("root 1 is %f \n ",root_1);
      printf("root 2 is %f ",root_2);
     }

     else if(denominator>0)
     {
     printf("roots are real and different\n");

     root_1=(-b+sqrt(denominator))/(2*a);
     root_2=(-b-sqrt(denominator))/(2*a);

     printf("root 1 is %f \n",root_1);
     printf("root 2 is %f ",root_2);
     }
     else
     {
     printf("roots are real and imaginary\n");

     }
return 0;
}
