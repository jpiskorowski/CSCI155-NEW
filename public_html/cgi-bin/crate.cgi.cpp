#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
  
{
  
  // here is the datastring length=1&width=2&height=3
  
  string str = "";
  
  cin >> str;
  
  string str1 = str.substr(7,1);
  
  string str2 = str.substr(15,1);
  
  string str3 = str.substr(24,1);
  
  
  int Number1, Number2, Number3, Number4, Number5;
  
  stringstream(str1) >> Number1;

	stringstream(str2) >> Number2;

	stringstream(str3) >> Number3;
  
  Number4 = Number1 * Number2 * Number3;
	
	Number5 = Number4 * 0.23;
  
  
  cout << "Content-type: text/html" << endl << endl;
  
  cout << "<html><head><title>customer order</title></head><body>" << endl;
  
  cout << "Data received: " << str << endl << "<br>";
  
  cout << "The volume of the crate will be "  << Number4 << " cubic feet" << endl << "<br>";
	
	cout << "The cost of the crate will be $"  << Number5 << endl << "<br>";
  
  cout << "</body></html>" << endl;
  
  return 0;
  
}