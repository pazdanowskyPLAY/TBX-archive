////////// BIBLIOTEKI //////////
#include <iostream>   // podstawowe komendy
#include <cstdlib>    // komendy konsolowe
#include <windows.h>  // BlockInput, zmiana katalogu roboczego
#include <conio.h>    // getchar itp.
#include ".source/library/cursor.h"
#include ".source/library/cursor.cpp"
using namespace std;

////////// ZMIENNE, FUNKCJE I INNE //////////
char start_choise;

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
		cout<<"  ######            MENU STARTU GRY           ######" <<endl;
		cout<<"  ###                                            ###" <<endl;
		cout<<"  ##################################################" <<endl;
		cout<<"  ###                            " <<endl;
		cout<<"  ### 1 - Nowa gra           " <<endl;
		cout<<"  ### 2 - Kontynuuj grê      " <<endl;
		cout<<"  ### 3 - Galeria            " <<endl;
		cout<<"  ###                            " <<endl;
		cout<<"  ### Z - Powrót do menu g³ównego" <<endl;
		cout<<"  ###                            " <<endl;
		
		start_choise=getch();
		switch (start_choise)
		{
			case '1':{system("new_game.exe");				} break;
			case '2':{system("continue.exe");				} break;
			case '3':{system("cd.. & start gallery\\.");	} break;
			case 'Z':
			case 'z':{system("main_menu.exe");	} break;
			default: {Error(1);} break;
		} //switch
	} //for
} //main