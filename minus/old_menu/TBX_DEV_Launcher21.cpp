////////// BIBLIOTEKI //////////
#include <iostream>   // podstawowe komendy
#include <cstdlib>    // komendy konsolowe
#include <windows.h>  // sleep itp.
#include <conio.h>    // getchar itp.
#include <cstdio>
#include ".source/library/cursor.h"
#include ".source/library/cursor.cpp"
using namespace std;

////////// ZMIENNE, FUNKCJE I INNE //////////
string login, password;
char page1_choise, page2_choise, page3_choise;

////////// G£ÓWNY PROGRAM //////////
int main()
{
	system("@chcp 1250");
	for(;;)
	{
		system("cls & title TBX_PL DEV Launcher");
		cout<<"" <<endl;

		cout<<"  $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" <<endl; //1
		cout<<"  $$$                              $$$              " <<endl; //2
		cout<<"  $$$ TBX_DEV Launcher (v22)       $$$              " <<endl; //3
		cout<<"  $$$ (for version 2.5b)           $$$              " <<endl; //4
		cout<<"  $$$                                               " <<endl; //5
		cout<<"  $$$$$ User's login:                               " <<endl; //6
		cout<<"  $$$$$ User's password:                            " <<endl; //7
		cout<<"  $$$                                               " <<endl; //8
		cout<<"  $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" <<endl; //9

		setCursor(25, 6); cin>>login;
		setCursor(25, 7); cin>>password;

		// wszystko poprawne
		if (login=="testroot" && password=="minustbx")
		{
			setCursor(40, 3);
			cout<<"Witaj "<<login<<"";
			Sleep(1000);
			system("README.html");


			// wybór kodu
			for(;;)
			{
				// strona 1
				system("cls");
				cout<<""<<endl;

				cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" <<endl;
				cout<<"$$$                              " <<endl;
				cout<<"$$$ Type a number to enter...    " <<endl;
				cout<<"$$$ (page 1/3)                   " <<endl;
				cout<<"$$$                              " <<endl;
				cout<<"$$$ 1 - main_menu.exe            " <<endl;
				cout<<"$$$ 2 - start_menu.exe           " <<endl;
				cout<<"$$$ 3 - new_game.exe             " <<endl;
				cout<<"$$$ 4 - continue.exe             " <<endl;
				cout<<"$$$ 5 - sethings_menu.exe        " <<endl;
				cout<<"$$$ 6 - credits.exe              " <<endl;
				cout<<"$$$ 7 - 0.exe                    " <<endl;
				cout<<"$$$ 8 - 1.exe (doesn't exist yet)" <<endl;
				cout<<"$$$ 9 - 2.exe (doesn't exist yet)" <<endl;
				cout<<"$$$                              " <<endl;
				cout<<"$$$ Z - Next page                " <<endl;
				cout<<"$$$                              " <<endl;
				cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" <<endl;
				page1_choise=getch();
				switch (page1_choise)
				{
					case '1': {system("cd .source\\menu & start main_menu.exe");	} break;
					case '2': {system("cd .source\\menu & start start_menu.exe");	} break;
					case '3': {system("cd .source\\menu & start new_game.exe");		} break;
					case '4': {system("cd .source\\menu & start continue.exe");		} break;
					case '5': {system("cd .source\\menu & start sethings_menu.exe");} break;
					case '6': {system("cd .source\\menu & start credits.exe");		} break;
					case '7': {system("cd .source\\0 & start 0.exe");		} break;
					case '8': {system("cd .source\\1 & start 1.exe");		} break;
					case '9': {system("cd .source\\2 & start 2.exe");		} break;

					case 'Z':
					case 'z':
					{
						for(;;)
						{
							// strona 2
							system("cls");
							cout<<""<<endl;

							cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" <<endl;
							cout<<"$$$                              " <<endl;
							cout<<"$$$ Type a number to enter...    " <<endl;
							cout<<"$$$ (page 2/3)                   " <<endl;
							cout<<"$$$                              " <<endl;
							cout<<"$$$ 1 - 3.exe (doesn't exist yet)" <<endl;
							cout<<"$$$ 2 - 4.exe (doesn't exist yet)" <<endl;
							cout<<"$$$ 3 - 5.exe (doesn't exist yet)" <<endl;
							cout<<"$$$ 4 - 6.exe (doesn't exist yet)" <<endl;
							cout<<"$$$ 5 - 7.exe (doesn't exist yet)" <<endl;
							cout<<"$$$ 6 - gallery directory        " <<endl;
							cout<<"$$$ 7 - menu directory           " <<endl;
							cout<<"$$$ 8 - music directory          " <<endl;
							cout<<"$$$ 9 - save directory           " <<endl;
							cout<<"$$$                              " <<endl;
							cout<<"$$$ Z - Next page                " <<endl;
							cout<<"$$$                              " <<endl;
							cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" <<endl;
							page2_choise=getch();
							switch (page2_choise)
							{
								case '1': {system("cd .source\\3 & start 3.exe");	} break;
								case '2': {system("cd .source\\4 & start 4.exe");	} break;
								case '3': {system("cd .source\\5 & start 5.exe");	} break;
								case '4': {system("cd .source\\6 & start 6.exe");	} break;
								case '5': {system("cd .source\\7 & start 7.exe");	} break;
								case '6': {system("cd .source & start gallery\\.");			} break;
								case '7': {system("cd .source & start menu\\.");			} break;
								case '8': {system("cd .source & start music\\.");			} break;
								case '9': {system("cd .source & start save\\.");			} break;

								case 'Z':
								case 'z':
								{
									for(;;)
									{
										// strona 3
										system("cls");
										cout<<""<<endl;

										cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" <<endl;
										cout<<"$$$                                 " <<endl;
										cout<<"$$$ Type a number to enter...       " <<endl;
										cout<<"$$$ (page 3/3)                      " <<endl;
										cout<<"$$$                                 " <<endl;
										cout<<"$$$ 1 - Run a game (in this window) " <<endl;
										cout<<"$$$ 2 - Structure of game's directories" <<endl;
										cout<<"$$$ 3 - Authors of this software    " <<endl;
										cout<<"$$$ 4 - fix_tool.exe (doesn't exist yet)" <<endl;
										cout<<"$$$ 5 - (doesn't exist yet)         " <<endl;
										cout<<"$$$ 6 - (doesn't exist yet)         " <<endl;
										cout<<"$$$ 7 - (doesn't exist yet)         " <<endl;
										cout<<"$$$ 8 - (doesn't exist yet)         " <<endl;
										cout<<"$$$ 9 - (doesn't exist yet)         " <<endl;
										cout<<"$$$                                 " <<endl;
										cout<<"$$$ Z - Next page                   " <<endl;
										cout<<"$$$                                 " <<endl;
										cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" <<endl;
										page3_choise=getch();
										switch (page3_choise)
										{
											case '1': {system("cd .source\\menu & main_menu.exe");} break;
											case '2': {system("start cmd /C \"tree /F & pause\"");} break;
											case '3':
											{
												cout<<"$$$                                  " <<endl;
												cout<<"$$$ Authors: A00, A03                " <<endl;
												cout<<"$$$ Version CPminus2.5b_22           " <<endl;
												cout<<"$$$ CopyCenter (cc) 2021-2023 BYR Studio" <<endl;
												cout<<"$$$                                  " <<endl;
												getchar();
											}
											break;

											case 'z':
											case 'Z': {break;} break;

											default: {Error(0);} break;
										} //switch - strona 3
										break;
									} // pêtla for - strona 3
								//koniec strony 3

								} //case - strona 2
								break;

								default: {Error(0);} break;
							} //switch - strona 2
							break;
						} // pêtla for - strona 2
					// koniec strony 2

					} //case - strona 1
					break;

					default: {Error(0);} break;
				} //switch - strona 1
			} //pêtla for - strona 1
			//koniec strony 1

		} // if

		// has³o b³êdne
		else if (login=="testroot" && password=="minustbx")
		{
			setCursor(0, 0);
			cerr<<"!!! B³¹d[dev]: Has³o dla "<<login<<" niepoprawne.";
			MessageBox(NULL, "B³¹d[dev, loginbox-password]:\nHas³o dla podanego konta jest niepoprawne\nProszê spróbowaæ jeszcze raz.", "TBX DEV LAUNCHER", MB_ICONWARNING + MB_OK + MB_APPLMODAL );
			getchar();
			continue;
		}

		else
		{
			setCursor(0, 0);
			cerr<<"!!! B³¹d[dev]: Konto "<<login<<" nie istnieje.";
			MessageBox(NULL, "B³¹d[dev, loginbox-login]:\nKonto o podanej nazwie nie istnieje\nProszê spróbowaæ jeszcze raz.", "TBX DEV LAUNCHER", MB_ICONWARNING + MB_OK + MB_APPLMODAL );
			getchar();
			continue;
		}
	} //for
} //main
