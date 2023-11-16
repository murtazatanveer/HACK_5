#include<stdio.h>

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




}