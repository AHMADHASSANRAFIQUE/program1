#include<iostream>
using namespace std;
main() {
string team;
int win,lose,draw,point;
cout << "Enter the name of the cricket team: ";
cin >> team;
cout << "Enter the number of wins: ";
cin >> win;
cout << "Enter the number of draws: ";
cin >> draw;
cout << "Enter the number of losses: ";
cin >> lose;
point = win * 5 + draw * 1 - lose * 3;
cout << team <<" has obtained "<< point <<" points in the Asia Cup tournament.";




}