#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()

{

	// here is the datastring apples=1&bananas=2&pears=3

	string str = "";

	cin >> str;

	string str1 = str.substr(7,1);

	string str2 = str.substr (17,1);
      
        string str3 = str.substr (25,1);

	
	int Number1, Number2, Number3, Number4;

	stringstream(str1) >> Number1;

	stringstream(str2) >> Number2;

	stringstream(str3) >> Number3;

	Number4 = Number1 + Number2 + Number3;


	cout << "Content-type: text/html" << endl << endl;

        cout << "<html><head><title>customer order</title></head><body>" << endl;
        
        cout << "Data received: "  << str << endl << "<br>";
	
	cout << "Apples ordered: "  << Number1 << endl << "<br>";

	cout << "Bananas ordered: "  << Number2 << endl << "<br>";

	cout << "Pears ordered: "  << Number3 << endl << "<br>" ;

	cout << "The total order: " <<  Number4 << endl << "<br>";

	cout << "</body></html>" << endl;

	return 0;

}

