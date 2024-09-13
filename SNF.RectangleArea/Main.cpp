// Rectangle Area
// Sam Fox

#include <iostream>
#include <conio.h>

using namespace std;

int GetLengthFromUser()
{
	int length;
	cout << "Enter the length of the rectangle: ";
	cin >> length;

	return length;
}

int GetWidthFromUser()
{
	int width;
	cout << "Enter the width of the rectangle: ";
	cin >> width;

	return width;
}

float CalculateArea(int getlength = GetLengthFromUser(), int getwidth = GetWidthFromUser())
{

	float area = getlength * getwidth;

	return area;
}

void DisplayArea()
{
	
	float displayArea = CalculateArea();

	cout << displayArea;
}

int main()
{
	
	DisplayArea();


	(void)_getch();
	return 0;
}