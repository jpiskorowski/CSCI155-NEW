// Crate Program in C++
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{ 
    // Constants for cost and amount charged
    const double COST_PER_CUBIC_FOOT =  0.23;
    const double CHARGE_PER_CUBIC_FOOT =  0.5;
    
    // Variables
    double length,   // The crate's length
           width,    // The crate's width
           height,   // The crate's height
           volume,   // The volume of the crate
           cost,     // The cost to build the crate
           charge,   // The customer charge for the crate
           profit;   // The profit made on the crate
  
  ofstream Cratehack;
           
    // Set the desired output formatting for numbers.
    cout << setprecision(2) << fixed << showpoint;
    
    // Prompt the user for the crate's length, width, and height
    cout << "Enter the dimensions of the crate (in feet):\n" ;
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;
  
  // Open a file named Cratehack.txt
  Cratehack.open("Cratehack.txt")
  
  // Calculate the crate's volume, the cost to produce it,
  // the charge to the customer, and the profit.
  ;volume = length * width * height;
  cost = volume * COST_PER_CUBIC_FOOT;
  charge = volume * CHARGE_PER_CUBIC_FOOT;
  profit = charge - cost;
  
  // Write the data to a file.
  Cratehack << "You entered:" << endl;
  Cratehack << "Length: " << length << endl;
  Cratehack << "Width: " << width << endl;
  Cratehack << "Height: " << height << endl << endl;
  Cratehack << "The volume of the crate is ";
  Cratehack << volume << " cubic feet.\n";
  Cratehack << "Cost to build: $" << cost << endl;
  Cratehack << "Charge to customer: $"  << charge << endl;
  Cratehack << "Profit: $" << profit << endl;
  
  // Display the calculated data.
  cout << "The volume of the crate is ";
  cout << volume << " cubic feet.\n";
  cout << "Cost to build: $" << cost << endl;
  cout << "Charge to customer: $" << charge << endl;
  cout << "Profit: $" << profit << endl;
    
  // Close the file
  Cratehack.close();
  cout << "Data written to Cratehack.txt"; 
  return 0;
}