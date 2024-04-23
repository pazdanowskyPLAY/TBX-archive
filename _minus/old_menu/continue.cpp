////////// BIBLIOTEKI //////////
#include <iostream>   // podstawowe komendy
#include <cstdlib>    // komendy konsolowe
#include <conio.h>    // getchar itp.
#include <windows.h>  // BlockInput, zmiana katalogu roboczego, WinAPI
#include ".source/library/cursor.h"
#include ".source/library/cursor.cpp"
using namespace std;

////////// ZMIENNE, FUNKCJE I INNE //////////
char continue_choise;

////////// G£ÓWNY PROGRAM //////////
int main()
{
	system("@chcp 1250");
	for(;;)
	{
		system("cls & title TBX [CP -2.5b DEV]");
		cout<<"" <<endl;
		
		cout<<"  ##################################################" <<endl;
		cout<<"  ###                                            ###" <<endl;
		cout<<"  ######        MENU KONTYNUOWANIA GRY        ######" <<endl;
		cout<<"  ###                                            ###" <<endl;
		cout<<"  ##################################################" <<endl;
		cout<<"  ###                                  " <<endl;
		cout<<"  ### Wybierz akt:                     " <<endl;
		cout<<"  ### 0 - Prolog (obecnie rozwijany)   " <<endl;
		cout<<"  ### 1 - Akt 1: (jeszcze nie istnieje)" <<endl;
		cout<<"  ### 2 - Akt 2: (jeszcze nie istnieje)" <<endl;
		cout<<"  ### 3 - Akt 3: (jeszcze nie istnieje)" <<endl;
		cout<<"  ### 4 - Akt 4: (jeszcze nie istnieje)" <<endl;
		cout<<"  ### 5 - Akt 5: (jeszcze nie istnieje)" <<endl;
		cout<<"  ### 6 - Epilog (jeszcze nie istnieje)" <<endl;
		cout<<"  ###                                  " <<endl;
		cout<<"  ### Z - Wyjœcie do menu startu       " <<endl;
		cout<<"  ###                                  " <<endl;
		
		continue_choise=getch();
		switch (continue_choise)
		{
			// mechanizm wczytywania kodów
			case '0': system("cd ..\\0 & 0_checking.exe");
			case '1': system("cd ..\\1 & 1_checking.exe");
			case '2': system("cd ..\\2 & 2_checking.exe");
			case '3': system("cd ..\\3 & 3_checking.exe");
			case '4': system("cd ..\\4 & 4_checking.exe");
			case '5': system("cd ..\\5 & 5_checking.exe");
			case '6': system("cd ..\\6 & 6_checking.exe");
			case 'Z':
			case 'z': system("main_menu.exe");}
			case '-': system("cd ..\\7 & 7_checking.exe");
			default:
			{
				setCursor(0, 0);
				cerr<<"!!! B³¹d: Niepoprawny lub/i nieistniej¹cy wybór." <<endl;
				getchar(); getchar();
			}
			break;
		} //switch
	} //for
} // main