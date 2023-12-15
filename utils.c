#include<stdio.h>
#include "util.h"

double degreesToRadians(double degrees);

int main(){

 printf("\nAIR DISTANCE : %.2lf",air_distance( 41.9 , 40.8  , -87.6 , -96.7 ));

 printf("\nAfter Converting %.2lf degrees into radians we get : %.2lf",80.00,degreesToRadians(80));


}

