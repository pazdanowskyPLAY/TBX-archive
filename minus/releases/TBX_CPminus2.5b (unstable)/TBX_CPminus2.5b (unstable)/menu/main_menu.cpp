////////// BIBLIOTEKI //////////
#include <iostream>   // podstawowe komendy
#include <stdio.h>    // takie windows.h, ale te¿ na linuxie - sleep, rand itp.
#include <windows.h>  // BlockInput
#include <cstdlib>    // komendy konsolowe
#include <conio.h>    // getchar itp.
#include "../library/cursor.h"
#include "../library/cursor.cpp"
using namespace std;

////////// ZMIENNE, FUNKCJE I INNE //////////
char menu_choise;
char start_choise; char start1;

void Exit()
{
	system("cls");
	cout<<"  #                                                      " <<endl;
	cout<<"  # Wszystkie twoje dane zosta³y (chyba) zapisane, o ile w ogóle coœ zapisywa³eœ/aœ." <<endl;
	cout<<"  # Teraz mo¿esz bezpiecznie zamkn¹æ T.B.X.              " <<endl;
	cout<<"  # Kliknij w prawym górnym rogu (czerwony) przycisk X..." <<endl;
	cout<<"  # ...albo wciœnij Ctrl+C, opcji jest bardzo wiele :)   " <<endl;
	cout<<"  #                                                      " <<endl;
}

////////// G£ÓWNY PROGRAM //////////
int main()
{
	system("@chcp 1250");
	for(;;)
	{
		system("cls & title TBX [CP -2.5b DEV]");
		cout<<"" <<endl;

		cout<<"  ##################################################" <<endl; //1
		cout<<"  ###                                            ###" <<endl; //2
		cout<<"  ################################   ###############" <<endl; //3
		cout<<"  ###          ##     ##   ##    ## ##           ###" <<endl; //4
		cout<<"  ###          ##     ######      ###            ###" <<endl; //5
		cout<<"  ###          ##     ##   ##    ## ##           ###" <<endl; //6
		cout<<"  ###          ##   # ######  # ##   ## #        ###" <<endl; //7
		cout<<"  ###                                            ###" <<endl; //8
		cout<<"  #####             CP -2.5b (DEV)             #####" <<endl; //9
		cout<<"  #####      Copyright c 2022 BYRG STUDIO      #####" <<endl; //10
		cout<<"  ###                                            ###" <<endl; //11
		cout<<"  ###   %%%          ## 1 - Menu startu gry      ###" <<endl; //12
		cout<<"  ###  %%   %   %    ## 2 - Menu ustawieñ        ###" <<endl; //13
		cout<<"  ###  %%  %%% %%%   ## 3 - Autorzy              ###" <<endl; //14
		cout<<"  ###  %%   %   %    ## 4 - Teksy powitalne      ###" <<endl; //15
		cout<<"  ###   %%%          ##                          ###" <<endl; //16
		cout<<"  ###                ## Z - Wyjœcie              ###" <<endl; //17
		cout<<"  ##################################################" <<endl; //18
		menu_choise=getch();
		switch (menu_choise)
		{
			case '1':
			{
				for(;;)
				{
					system("cls");
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
                        case 'z':{start1=='1';} break;
						default: {Error(1);} break;
                    if (start1=='1') break;
					} //switch

                    if (start1=='1') break;

				} //for
				continue;
			}

			case '2': system("sethings_menu.exe");
			case '3': system("credits.exe");
			case '4':
			{
				setCursor(6, 0);
				string HelloText = "test-test-test-123";
				cout<<HelloText;
				Sleep(1000);
				delString(HelloText);
				continue;
			}
			break;
			case 'Z':
            case 'z': {Exit();} break;
			default: {Error(1);} break;
		} //switch
	} //for
} //main
