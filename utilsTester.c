#include<stdio.h>
#include<math.h>
#include "util.h"



int main(){

 printf("\nTest cases for function degreesToRadians(); \n");

printf("\n1st : After Converting %.2lf degrees into radians we get : %.2lf",80.00,degreesToRadians(80));
printf("\n2nd : After Converting %.2lf degrees into radians we get : %.2lf",80.00,degreesToRadians(90));
printf("\n3rd : After Converting %.2lf degrees into radians we get : %.2lf",80.00,degreesToRadians(100));

 printf("\nAIR DISTANCE : %.2lf",air_distance( 41.9 , 40.8  , -87.6 , -96.7 ));

 


}