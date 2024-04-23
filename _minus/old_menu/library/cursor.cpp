#include <windows.h>
#include "cursor.h"

void setCursor(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition (GetStdHandle (STD_OUTPUT_HANDLE), c);
}

void delString(string text)
{
    for( int a = 0; a < text.size(); a++ )
	{
		cout << "\b \b";
		Sleep(50);
	}
}

void delIntSpace(int space)
{
	for( int a = 0; a < space; a++ )
	{
		cout << "\b \b";
		Sleep(50);
	}
}

void Error(int number)
{
	if (number==0)
	{
		setCursor(0, 0);
		cerr<<"!!! ERR[dev]: Niepoprawny lub/i nieistniej�cy wyb�r." <<endl;
	}

	else if (number==1)
	{
		setCursor(0, 0);
		cerr<<"!!! ERR: Nieznany b��d." <<endl;
	}

	else if (number==2)
	{
		setCursor(0, 0);
		cerr<<"!!! ERR: Niepoprawny lub/i nieistniej�cy wyb�r." <<endl;
	}

	else if (number==3)
	{
		setCursor(0, 0);
		cerr<<"!!! ERR: Pliki zapisu nie istniej�." <<endl;
	}

	else if (number==4)
	{
		setCursor(0, 0);
		cerr<<"!!! ERR: Pliki zapisu s� uszkodzone." <<endl;
	}

	else if (number==5)
	{
		setCursor(0, 0);
		cerr<<"!!! ERR: Pliki zapisu zosta�y zmodyfikowane." <<endl;
	}
}
