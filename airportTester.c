
 #include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include "airport.h"

int main(int argc, char **argv) {
//testing

Airport *airport1 = createAirport("20NE", "heliport", "Bryan Memorial Hospital Heliport", 40.79610062,-96.65219879,1186, "Lincoln", "US");
Airport *airport2 = createAirport("47NE", "heliport", "Bryan Lincoln General Hospital Heliport", 40.789648, -89.698291, 1204, "Lincoln", "US");
Airport *airport3 = createAirport("47NE", "airport", "UNL Airport", 19, 64.3453, 0, "Lincoln", "US");
Airport *empty = createAirport("", "", "", 0, 0, 0, "", "");
initAirport(empty, "6NE5", "Heliport", "Jan Pad Heliport", 40.83330154, -96.56829834, 1160, "Lincoln", "US");
initAirport(empty, "NE59", "small_airport" ,"Pester Airport",40.83330154, -96.56700134, 1150,"Lincoln", "US");
initAirport(empty, "NE60", "heliport","St Elizabeth Community Health Center Heliport",40.80780029,-96.63079834,1252,"Lincoln", "US");

char* result = malloc(sizeof(char) *1000);
char* result2 = malloc(sizeof(char) *1000);
char* result3 = malloc(sizeof(char) *1000);
result = airportToString(airport1);
result2 = airportToString(airport2);
result3 = airportToString(airport3);
printf("Testing function airportToString\n");
printf("%s", result);
printf("%s", result2);
printf("%s", result3);

double distance = getAirDistance(airport1, airport2);
double distance2 = getAirDistance(airport2, airport3);
double distance3 = getAirDistance(airport1, airport3);
printf("\nTesting function getAirDistance\n");
printf("Distance(Bryan Memorial Hospital Heliport, Bryan Lincoln General Hospital Heliport) = %f\n", distance);
printf("Distance(Bryan Lincoln General Hospital Heliport, UNL Airport) = %f\n", distance2);
printf("Distance(Bryan Memorial Hospital Heliport, UNL Airport) = %f\n", distance3);
Airport *stop = malloc (sizeof(Airport)*2);
Airport *stop2 = malloc (sizeof(Airport)*2);
Airport *stop3 = malloc (sizeof(Airport)*2);
stop[0] = *airport1;
stop[1] = *airport2;
stop2[0] = *airport2;
stop2[1] = *airport3;
stop3[0] = *airport1;
stop3[1] = *airport3;
double time1 = getEstimatedTravelTime(stop, 2, 700, 2);
double time2 = getEstimatedTravelTime(stop2, 2, 1000, 7);
double time3 = getEstimatedTravelTime(stop3, 2, 800, 9);
printf("\ntesting function getEstimatedTravelTime\n");
printf("The travel time between Bryan Memorial Hospital Heliport and Bryan Lincoln General Hospital Heliport is %f hours\n", time1);
printf("The travel time between Bryan Lincoln General Hospital Heliport and UNL Airport is %f hours\n", time2);
printf("The travel time between Bryan Memorial Hospital Heliport and UNL Airport is %f hours\n", time3);

return 0;

}
