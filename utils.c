#include<stdio.h>
#include<math.h>
#include "util.h"


double air_distance(double lat_ori , double lat_des , double lon_ori , double lon_des){

const float pi =3.14;
const int ear_rad = 6371;

//a : lat_ori
double a = ( pi * lat_ori)/180;

//b : lat_des
double b = ( pi * lat_des)/180;

//c : lon_ori
double c = ( pi * lon_ori)/180;

//d : lon_des
double d = ( pi * lon_des)/180;

double distance = acos( (sin(a) * sin(b)) + (cos(a) * cos(b) * cos(d-c)) ) * ear_rad;

return distance;

}



double degreesToRadians(double degrees){

const float pi=3.14f;

double radians;

radians = (pi*degrees)/180;

return radians;

}

