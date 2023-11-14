#include<stdio.h>
double degree_to_radians();

int main(){

double degree;
printf("\nEnter value in Degrees : ");
scanf("%lf",&degree);

printf("\nAfter converting %.1lf degrees we found %.3lf Radians\n",degree,degree_to_radians(degree));

}

double degree_to_radians(double degree){

const float pi = 3.14;

double radians = (pi*degree)/180;

return radians;

}