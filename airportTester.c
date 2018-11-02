/**
Author: Victor Nguyen, Collin Sipple, David Ryan
My NU ID: 02357235
CLASS: 155E
Section 250
Date Started: 11/01/2018
Date Finished: 11/02/2018
 *
 *
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#include "airport.h"

int main(int argc, char **argv) {

  20NE,heliport,Bryan Memorial Hospital Heliport,40.79610062,-96.65219879,1186,US,US-NE,Lincoln
  47NE,heliport,Bryan Lincoln General Hospital Heliport,40.789648,-96.698291,1204,US,US-NE,Lincoln
  6NE5,heliport,Jan Pad Heliport,40.83330154,-96.56829834,1160,US,US-NE,Lincoln
  KLNK,medium_airport,Lincoln Airport,40.85100174,-96.75920105,1219,US,US-NE,Lincoln
  NE42,small_airport,Dream Field,40.93330002,-96.70059967,1194,US,US-NE,Lincoln
  NE59,small_airport,Pester Airport,40.83330154,-96.56700134,1150,US,US-NE,Lincoln
  NE60,heliport,St Elizabeth Community Health Center Heliport,40.80780029,-96.63079834,1252,US,US-NE,Lincoln

return 0;
}
















// 
//
// ----------------------------------------------
//
// double getAirDistance(const Airport* origin, const Airport* destination){
//   char *a = airportToString(origin);
//   char *b = airportToString(destination);
//   double lata = a[3];
//   double latb = b[3];
//   double longa = a[4];
//   double longb = b[4];
//
//   if(lata > 90 || lata < -90 || longa > 180 || longb < -180){
//     return 0;
//   }
//   if(latb > 90 || latb < -90 || longb > 180 || longb < -180){
//     return 0;
//   }
//
//   double conversionlata = (lata/180) * M_PI;
//   double conversionlonga = (longa/180) * M_PI;
//   double conversionlatb = (latb/180) * M_PI;
//   double conversionlongb = (longb/180) * M_PI;
//
//   double gdistance = 0;
//   gdistance = acos(sin(conversionlata) * sin(conversionlatb) + cos(conversionlata) * cos(conversionlatb) * cos(conversionlongb - conversionlonga)) * 6371;
//
//   return gdistance;
// }
//
// double getEstimatedTravelTime(const Airport* stops,
//                               int size,
//                               double aveKmsPerHour,
//                               double aveLayoverTimeHrs){
//   double totalDistance = 0;
//   for(int i = 1; i < size; i++){
//     totalDistance += getAirDistance(&stops[i - 1], &stops[i]);
//   }
//   double travelTime = totalDistance / aveKmsPerHour;
//   double totalTime = travelTime / aveLayoverTimeHrs * (size - 2);
//
//   return totalTime;
// }
