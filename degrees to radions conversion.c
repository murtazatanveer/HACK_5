#include<stdio.h>
double degree_to_radians();

int main(){

double degree;
printf("Enter value in Degrees : ");
scanf("%lf",&degree);

printf("\n\nAfter converting %.2lf degrees we found %.2lf Radians",degree,degree_to_radians(degree));

    
}

double degree_to_radians(double degree){

const float pi = 3.14;

double radians = (pi*degree)/180

return radians;

}