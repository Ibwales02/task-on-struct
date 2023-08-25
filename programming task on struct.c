#include<stdio.h>

typedef struct Complex{
    double real;
    double imagine;
}cpx;

int main()
{
    cpx c1 ={.real = 97, .imagine = 87.97};
     cpx c2 ={.real = 79, .imagine = 117.97};
      cpx c3 ={.real = 88, .imagine = 98.97};
      
      cpx diff;
      
      diff.real = c1.real - c2.real - c3.real ;
      diff.imagine = c1.imagine - c2.imagine - c3.imagine ;
      printf("Difference of 3 complex numbers = %lf - %lfi", diff.real ,diff.imagine);
      
      return 0;
}