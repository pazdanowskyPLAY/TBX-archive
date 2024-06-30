////////// BIBLIOTEKI //////////
#include <iostream>   // podstawowe komendy
#include <stdio.h>    // takie windows.h, ale te� na linuxie - sleep, rand itp.
#include <windows.h>  // BlockInput, zmiana katalogu roboczego
#include <cstdlib>    // komendy konsolowe
#include <conio.h>    // getchar itp.
#include <fstream>    // operacje na plikach
#include ".source/library/cursor.h"
#include ".source/library/cursor.cpp"
using namespace std;

////////// ZMIENNE, FUNKCJE I INNE //////////
char sethings_choise, theme_choise, r_progressIO, r_sethingsIO;

////////// G��WNY PROGRAM //////////
int main()
{
	system("@chcp 1250");
	for(;;)
	{
		// NI - NOT IMPLEMENTED
		system("cls & title TBX [CP -2.5b DEV]");
		cout<<"" <<endl;
		
		cout<<"  ##################################################" <<endl;
		cout<<"  ###                                            ###" <<endl;
		cout<<"  ######             MENU USTAWIE�            ######" <<endl;
		cout<<"  ###         (NI - NIE ZAIMPLEMENTOWANO)        ###" <<endl;
		cout<<"  ##################################################" <<endl;
		cout<<"  ###                                       " <<endl;
		cout<<"  ### 1 - Motywy (NI)                       " <<endl;
		cout<<"  ### 2 - Strona internetowa (NI)           " <<endl;
		cout<<"  ### 3 - Reset post�p�w (Y/N)              " <<endl;
		cout<<"  ### 4 - Reset ustawie� (Y/N) (NI)         " <<endl;
		cout<<"  ### 5 - lista wszystkich wersji           " <<endl;
		cout<<"  ###                                       " <<endl;
		cout<<"  ### Z - Powr�t do menu g��wnego           " <<endl;
		cout<<"  ###                                       " <<endl;
		cout<<""<<endl;
	
		sethings_choise=getch();
		switch (sethings_choise)
		{
			// MOTYWY
			case '1':
			{
				for(;;)
				{
					system("cls");
					cout<<"" <<endl;
					
					cout<<"  #" <<endl;
					cout<<"  # Motywy: (jeszcze nie istnieje system zapisu)" <<endl;
					cout<<"  # 1 - domy�lny (monochromatyczny bia�y) (W)              " <<endl;
					cout<<"  # 2 - matrix (monochromatyczny zielony) (W)              " <<endl;
					cout<<"  # 3 - wysoki kontrast (monochromatyczny ��ty) (W)       " <<endl;
					cout<<"  # 4 - tryb jasny (bia�e t�o, czarny tekst) (W)           " <<endl;
					cout<<"  # 5 - ciemno�� (wszystko na czarno, tryb ekstremalny) (W)" <<endl;
					cout<<"  #                                                        " <<endl;
					cout<<"  # Z - Wyj�cie do menu ustawie�" <<endl;
					cout<<"  #" <<endl;
					
					theme_choise=getch();
					switch (theme_choise)
					{
						case '1': {cout<<"domy�lny" <<endl; getchar();   } break;
						case '2': {cout<<"matrix" <<endl; getchar();   } break;
						case '3': {cout<<"kontrast" <<endl; getchar();   } break;
						case '4': {cout<<"JASNY" <<endl; getchar();   } break;
						case '5': {cout<<"CIEMNY" <<endl; getchar();	 } break;
						case 'Z':
						case 'z': break;
						default:
						{
							setCursor(0, 0);
							cerr<<"!!! B��d: Niepoprawny lub/i nieistniej�cy wyb�r." <<endl;
							getchar(); getchar();
						}
						break;
					} //switch
				} //for
			} //case
			
			// STRONA WWW
			/*case '2':
			{
				
			}
			break;*/
			
			//R_POST�PY
			case '3':
			{
				if (access("..\\save\\.all", F_OK) == 0 &&
					access("..\\save\\.all\\codes.tbx", F_OK) == 0 &&
					access("codes.tbx", F_OK) == 0 )
				{
					system("del /S /Q codes.tbx & rmdir /S /Q ..\\save\\.all");
					cout<<"  #                                 " <<endl;
					cout<<"  # Wykonano reset post�p�w.        " <<endl;
					cout<<"  # Kliknij ENTER, by kontynuowa�..." <<endl;
					cout<<"  #                                 " <<endl;
				}
				
				else if (access("..\\save\\.all", F_OK) != 0 &&
						 access("..\\save\\.all\\codes.tbx", F_OK) != 0 &&
						 access("codes.tbx", F_OK) != 0 )
				{
					cout<<"  #                                 " <<endl;
					cout<<"  # Nie wykryto pliku zapisu.       " <<endl;
					cout<<"  # Kliknij ENTER, by kontynuowa�..." <<endl;
					cout<<"  #                                 " <<endl;
				}
			}
			break;
			
			// R_USTAWIENIA
			case '4':
			{
				cout<<"  #" <<endl;
				cout<<"  # Resetowanie swoich ustawie� jeszcze nie zosta�o dodane. " <<endl;
				cout<<"  # Prosimy czeka� cierpliwie...                            " <<endl;
				cout<<"  #" <<endl;
				getchar();
			}
			break;
			
			case '5':
			{
				cout<<"  #" <<endl;
				cout<<"  # Lista wersji (od najnowszej):" <<endl;
				cout<<"  #" <<endl;
				cout<<"  # CPminus2.5b" <<endl;
				cout<<"  # CPminus2.5b_XX (11, 14, 15, 16, 17, 17.1)" <<endl;
				cout<<"  # CPminus2.5a" <<endl;
				cout<<"  # CPminus2.5a_XX (01, 03, 04, 07)" <<endl;
				cout<<"  # CPminus2.4.4b" <<endl;
				cout<<"  # CPminus2.4.4b_X (1, 3)" <<endl;
				cout<<"  # CPminus2.4.4a" <<endl;
				cout<<"  # CPminus2.4.3" <<endl;
				cout<<"  # CPminus2.4.2" <<endl;
				cout<<"  # CPminus2.4.1" <<endl;
				cout<<"  # CPminus2.X (1, 2, 3)" <<endl;
				cout<<"  # CPminus2" <<endl;
				cout<<"  # CP-1" <<endl;
				cout<<"  # openCP07f" <<endl;
				cout<<"  # openCP07e" <<endl;
				cout<<"  # privCP07.05" <<endl;
				cout<<"  # openCP07d" <<endl;
				cout<<"  # privCP07.04" <<endl;
				cout<<"  # openCP07c" <<endl;
				cout<<"  # openCP07b" <<endl;
				cout<<"  # privCP07.03" <<endl;
				cout<<"  # privCP07.02" <<endl;
				cout<<"  # openCP07a" <<endl;
				cout<<"  # privCP07.01" <<endl;
				cout<<"  # privCP06.XX (01, 02, 03)" <<endl;
				cout<<"  # privCP05" <<endl;
				cout<<"  # privCP04.XX (01, 02)" <<endl;
				cout<<"  # privCP03 (a, b)" <<endl;
				cout<<"  # privCP02 (a, b)" <<endl;
				cout<<"  # privCP01" <<endl;
				cout<<"  #" <<endl;
				cout<<"  # Wci�nij ENTER, by kontynuowa�." <<endl;
				cout<<"  #" <<endl;
				getchar();
			}
			break;
			
			case 'Z':
			case 'z': system("main_menu.exe");
			default: 
			{
				setCursor(0, 0);
				cerr<<"!!! B��d: Niepoprawny lub/i nieistniej�cy wyb�r." <<endl;
				getchar(); getchar();
			}
			break;
		} //switch
	} //for
} //main