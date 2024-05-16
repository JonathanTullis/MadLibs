#include <iostream>
#include <string>
using namespace std;

int main()
{
	string adjective1;
	string girlsName;
	string adjective2;
	string occupation1;
	string placeName;
	string clothing;
	string hobby;
	string adjective3;
	string occupation2;
	string boyName;
	string mansName;





	cout << "Enter an adjective" << endl;
	cin >> adjective1;
	cin.get();

	cout << "Enter a girls name" << endl;
	cin >> girlsName;

	cout << "Enter another adjective" << endl;
	cin >> adjective2;

	cout << "Enter an occupation" << endl;
	cin >> occupation1;

	cout << "Enter a place, Ex: Castle, New York, Hillside" << endl;
	cin >> placeName;

	cout << "Enter an article of clothing in plural form, Ex: pants, shirts, dresses" << endl;
	cin >> clothing;

	cout << "Enter a hobby" << endl;
	cin >> hobby;

	cout << "Enter an adjective" << endl;
	cin >> adjective3;

	cout << "Enter another occupation" << endl;
	cin >> occupation2;

	cout << "Enter a boys name" << endl;
	cin >> boyName;

	cout << "Enter a manly name" << endl;
	cin >> mansName;


	cout << "There once was a " << adjective1 << " girl named " << girlsName << "." << endl;
	cout << "She was a " << adjective2 << " " << occupation1 << " in the Kingdom of " << placeName << "." << endl;
	cout << "She loved to wear " << clothing << " and " << hobby << "." << endl;
	cout << "She wanted to marry the " << adjective3 << " " << occupation2 << " named " << boyName << " but her father, King " << mansName << " forbid her from seeing him." << endl;



	return 0;
}