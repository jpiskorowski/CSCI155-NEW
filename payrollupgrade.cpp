// This progam calculates the user's pay. 
#include <iostream>
using namespace std;
 
int main() { 
//setting up variables
double hours, rate, pay, stax, total;
 
// Get the number of hours worked. 
cout << "How many hours did you work? "; 
cin >> hours; 
 
// Get the hourly pay rate. 
cout << "How much do you get paid per hour? "; 
cin >> rate; 
  
// Calculate the pay
pay = hours * rate;
  
// Calculate the state tax
stax = (pay * .033);

// Calculate the total pay after tax
total = (pay - stax);

// Display the total pay after taxes
cout << "State income tax: $" << stax << endl;
cout << "You have earned $" << total << endl; 
return 0; 
}