#include <iostream>
using namespace std;
enum en_country_choice { jordan = 1, tunisa = 2, algeria = 3, oman = 4, morocco = 5 };
void country_menu()
{
	cout << "*********************************" << endl;
	cout << "Please enter the number of your country: " << endl;
	cout << "(1) Jordan....\n";
	cout << "(2) Tunisa....\n";
	cout << "(3) Algeria....\n";
	cout << "(4) Oman....\n";
	cout << "(5) Morocco....\n";
	cout << "*********************************" << endl;
}
int main()
{
	country_menu();
	en_country_choice country;
	int num;
	cin >> num;
	country = (en_country_choice)num;
	switch (country)
	{
		case en_country_choice::jordan:
			cout << "Your country is Jordan.";
			break;
		case en_country_choice::tunisa:
			cout << "Your country is Tunisa.";
			break;
		case en_country_choice::algeria:
			cout << "Your country is Algeria.";
			break;
		case en_country_choice::morocco:
			cout << "Your country is Morocco.";
			break;
		case en_country_choice::oman:
			cout << "Your country is Oman.";
			break;
		default:
			cout << "Sorry, this country is not available please try again!";
	}

}