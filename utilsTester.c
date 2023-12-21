#include<stdio.h>
#include<math.h>
#include "util.h"



int main(){

 printf("\nTest cases for function degreesToRadians(); \n");

printf("\n1st : After Converting %.2lf degrees into radians we get : %.2lf",80.00,degreesToRadians(80));
printf("\n2nd : After Converting %.2lf degrees into radians we get : %.2lf",90.00,degreesToRadians(90));
printf("\n3rd : After Converting %.2lf degrees into radians we get : %.2lf",100.00,degreesToRadians(100));


 printf("\nTest cases for function getAirDistance(); \n");

 printf("\n1st : AIR DISTANCE : %.2lf",getAirDistance( 41.9 , 40.8  , -87.6 , -96.7 ));
 printf("\n2ndt : AIR DISTANCE between San Francisco and Los Angeles : %.2lf",getAirDistance( 37.7749 , 34.0522  , -122.4194 , -118.2437 ));
  printf("\n3rdt : AIR DISTANCE between Lahore and Islamabad: %.2lf",getAirDistance( 33.6844 , 31.5497  , 73.0479 , 74.3436 ));

printf("\nTest cases for function lorentzTimeDilation();\n");

/* Test Case 1: Dilated time for t=1.00 years at 25.00% c: 0.96 years
Test Case 2: Dilated time for t=2.50 years at 50.00% c: 2.16 years
Test Case 3: Dilated time for t=0.50 years at 10.00% c: 0.49 years */


printf("\nResult : %.3lf years",lorentzTimeDilation(1.00,25.00));
printf("\nResult : %.3lf years",lorentzTimeDilation(2.50,50.00));
printf("\nResult : %.3lf years",lorentzTimeDilation(0.50,10.00));

}