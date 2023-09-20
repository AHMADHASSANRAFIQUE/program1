#include <iostream>
using namespace std;
main(){
float birthrate,population,threedecades;
cout << "Enter the current world population: ";
cin >> population;
cout << "Enter the monthly birth rate (number of births per month):";
cin >> birthrate;
threedecades = birthrate * 12 * 30 + population;
cout << "The population in three decades will be:"<< threedecades;






}