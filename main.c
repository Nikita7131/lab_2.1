#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double Math_V15();
double x;

int main(){

 printf("Enter x:");

 scanf("%lf",&x);

 printf("\ny = %lf", Math_V15());

 return 0;
}
double Math_V15(){
 if( x >= -12 && x < -8)
  return pow(2,abs(x)+1);
 else if ( x >= -3 && x < 3 )
   return (abs(cos(x)) + x)/(sin(x) + 1);
 else if ( x >= 10 && x < 200 )
   return 4*x + sqrt(pow(x,3) - 2*x);
 else
   return 1/125;
}
