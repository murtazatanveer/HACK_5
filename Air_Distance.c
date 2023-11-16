#include<stdio.h>
#include<math.h>

double air_distance();

int main(){

double lat_ori , lat_des , lon_ori , lon_des;

printf("Enter latitude in range [-90 , 90] and longitude in range [-180 , 180] in Degrees\n\n");

while(1){

printf("Enter latitude and longitude of Origin\n\n");
printf("latitude : ");
scanf("%lf",&lat_ori);

printf("\nlongitude : ");
scanf("%lf",&lon_ori);


printf("\n\nEnter latitude and longitude of destination\n\n");
printf("latitude : ");
scanf("%lf",&lat_des);

printf("\nlongitude : ");
scanf("%lf",&lon_des);

if( (lat_ori>=-90 && lat_ori<=90) && (lat_des>=-90 && lat_des<=90) && (lon_des>=-180 && lon_des<=180) &&
    (lon_ori>=-180 && lon_ori<=180) ){

      break;
    }
    else{
        printf("\nERROR! Invalid Range\n\n");
        continue;
    }


  }

    printf("\n_____________________\n");
// calling function
    printf("\nAIR DISTANCE : %.2lf",air_distance(lat_ori , lat_des , lon_ori , lon_des));

}


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