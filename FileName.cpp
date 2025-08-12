#include <iostream>
using namespace std;
enum en_screen_color {red=1,yellow=2,blue=3,green=4};
void color_menu()
{
	cout << "***************************************"<<endl;
	cout << "Please enter you favorite screen color: "<<endl;
	cout << "(1)Red....." << endl;
	cout << "(2)Yellow....." << endl;
	cout << "(3)Blue....." << endl;
	cout << "(4)Green....." << endl;
	cout << "***************************************" << endl<<endl;


}
int main()
{   en_screen_color color;
	color_menu();
	int num;
	cin >> num;
	color = (en_screen_color)num;
	if (color == en_screen_color::red) { system("color 4f"); }
	else if (color == en_screen_color::yellow) { system("color 6f"); }
	else if (color == en_screen_color::blue) { system("color 1f"); }
	else if (color == en_screen_color::green) { system("color 2f"); }
	else(cout << "Wrong data please try again!");	
}