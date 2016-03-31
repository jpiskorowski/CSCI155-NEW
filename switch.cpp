#include <iostream>
#include <string>
#include <fstream>
 
using namespace std;
 
int main ()
{
   // local variable declaration:
   char grade = 'C';
  
  ofstream Switch;
  
  // Open a file named Switch.txt
  Switch.open("Switch.txt");
  
  cout << "What is the grade: ";
  cin >> grade;
 
   switch(grade)
   {
   case 'A' :
   case 'a' :
      cout << "Excellent!" << endl;
      break;
   case 'B' :
   case 'b' :
   case 'C' :
   case 'c' :
      cout << "Well done!" << endl;
      break;
   case 'D' :
   case 'd' :
      cout << "You passed!" << endl;
      break;
   case 'F' :
   case 'f' :
      cout << "Better try again" << endl;
      break;
   default :
      cout << "Invalid grade" << endl;
   }
   cout << "Your grade is " << grade << endl;
  
  // Write the data to a file
  Switch << "The grade is: " << grade << endl;
  
  // Close the file
  Switch.close();
  cout << "Data written to Switch.txt";
 
   return 0;
}