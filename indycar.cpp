// An Indycar program in C++
#include<iostream>
using namespace std;

int main() {
  // setting up variables
int laps, distance, miles;

// Get the number of laps driven.
cout << "How many laps were driven around the track? ";
cin >> laps;

// Get the number of miles in a laps.
cout << "How many miles are in 1 lap of the Indy 500?";
cin >> miles;
  
// Calculate the miles traveled.
distance = miles * laps;
  
// display the miles traveled.
cout << "The car has traveled " << distance << " miles!" << endl;
return 0;
}