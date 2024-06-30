////////// BIBLIOTEKI //////////
#include <iostream>   // podstawowe komendy
#include <stdio.h>    // takie windows.h, ale te¿ na linuxie - sleep, rand itp.
#include <windows.h>  // BlockInput
#include <cstdlib>    // komendy konsolowe
#include <conio.h>    // getchar itp.
#include <fstream>    // operacje na plikach
#include <ctime>      // srand, time
#include <sstream>    // ostringstream
#include <unistd.h>   // access
#include ".source/library/cursor.h"
#include ".source/library/cursor.cpp"

#define RAND_MAX 0x186A0
using namespace std;

////////// ZMIENNE, FUNKCJE I INNE //////////
char new_choise, save_choise;

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
		cout<<"  ###    NOWA GRA - POSTÊP ZOSTANIE USUNIÊTY!    ###" <<endl; //3
		cout<<"  ###   Czy jesteœ pewien/a swego wyboru? [Y/N]  ###" <<endl; //4
		cout<<"  ###                                            ###" <<endl; //5
		cout<<"  ##################################################" <<endl; //6
		new_choise=getch();
		switch (new_choise)
		{
			case 'y':
			case 'Y':
			{
				// ostatnie ostrze¿enie
				if (access("..\\save\\.all", F_OK) == 0 &&
					access("..\\save\\.all\\codes.tbx", F_OK) == 0 &&
					access("codes.tbx", F_OK) == 0 )
				{
					cout<<"  # UWAGA!                       " <<endl;
					cout<<"  # Wykryto plik zapisu.         " <<endl;
					cout<<"  # Napewno chcesz zacz¹æ grê od nowa? [Y/N]" <<endl;
					cout<<"  #                              " <<endl;
					save_choise=getch();
					switch (save_choise)
					{
						case 'y':
						case 'Y':
						{
							system("rmdir /S /Q ..\\save\\.all & del /S /Q codes.tbx");
							continue;
						}
						
						case 'n':
						case 'N':
						{
							system("start_menu.exe");
						}
						
						default:
						{
							setCursor(0, 0);
							cerr<<"!!! B³¹d: Niepoprawny lub/i nieistniej¹cy wybór." <<endl; getchar();
							continue;
						}
					} //switch
				} //if
				
				// b³¹d
				else if (access("..\\save\\.all", F_OK) != 0 &&
						 access("..\\save\\.all\\codes.tbx", F_OK) != 0)
				{
					setCursor(0, 5);
					cout<<"                                                  " <<endl; // 5
					cout<<"                                                  " <<endl; // 6
					setCursor(0, 6);
				}
				
				
				// generowanie
				BlockInput(1);
				cout<<""<<endl;

				cout<<"  ############################################################" <<endl;
				cout<<"  #       Trwa generowanie i zapisywanie nowych kodów.       #" <<endl;
				cout<<"  #  NIE zamykaæ okna do czasu utworzenia wszystkich kodów.  #" <<endl;
				cout<<"  #           Mo¿e to potrwaæ kilkanaœcie sekund.            #" <<endl;
				cout<<"  #                    Prosimy czekaæ...                     #" <<endl;
				cout<<"  ############################################################" <<endl;
				Sleep(1);

				// XXXXX-XXXXX-XXXXX-XXXXX-XXXXX-A
				// ~10 sekund
				srand(time(NULL));
				cout<<"  # "<<endl;
				
				
				cout<<"  # Prolog - ";
				Sleep(rand()%1000);
				ostringstream code01;
				code01 << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-0";
				ostringstream code02;
				code02 << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-0";
				cout<<"OK"<<endl;
				
				

				cout<<"  # Akt 1 - ";
				Sleep(rand()%1000);
				ostringstream code11;
				code11 << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-1";
				ostringstream code12;
				code12 << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-1";
				ostringstream code13;
				code13 << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-1";
				cout<<"OK"<<endl;



				cout<<"  # Akt 2 - ";
				Sleep(rand()%1000);
				ostringstream code21;
				code21 << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-2";
				ostringstream code22;
				code22 << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-2";
				ostringstream code23;
				code23 << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-2";
				cout<<"OK"<<endl;



				cout<<"  # Akt 3 - ";
				Sleep(rand()%1000);
				ostringstream code31;
				code31 << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-3";
				ostringstream code32;
				code32 << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-3";
				ostringstream code33;
				code33 << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-3";
				cout<<"OK"<<endl;



				cout<<"  # Akt4 - ";
				Sleep(rand()%1000);
				ostringstream code41;
				code41 << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-4";
				ostringstream code42;
				code42 << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-4";
				ostringstream code43;
				code43 << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-4";
				ostringstream code44;
				code44 << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-4";
				ostringstream code45;
				code45 << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-4";
				cout<<"OK"<<endl;



				cout<<"  # Akt5 - ";
				Sleep(rand()%1000);
				ostringstream code51;
				code51 << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-5";
				ostringstream code52;
				code52 << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-5";
				ostringstream code53;
				code53 << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-5";
				ostringstream code54;
				code54 << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-5";
				ostringstream code55;
				code55 << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-5";
				cout<<"OK"<<endl;



				cout<<"  # Epilog - ";
				Sleep(rand()%1000);
				ostringstream code61;
				code61 << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-6";
				ostringstream code62;
				code62 << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-" << (rand()%89999)+10000 << "-6";
				cout<<"OK"<<endl;
				
				
				
				ostringstream code7;code7<<(rand()%89999)+10000<<"-00000-00000-00000-00000-7";cout<<""<<endl;
				
				fstream CodeGenerator;
				CodeGenerator.open("codes.tbx", ios::out);
				CodeGenerator << code01.str() <<endl;
				CodeGenerator << code02.str() <<endl;
				CodeGenerator << code11.str() <<endl;
				CodeGenerator << code12.str() <<endl;
				CodeGenerator << code13.str() <<endl;
				CodeGenerator << code21.str() <<endl;
				CodeGenerator << code22.str() <<endl;
				CodeGenerator << code23.str() <<endl;
				CodeGenerator << code31.str() <<endl;
				CodeGenerator << code32.str() <<endl;
				CodeGenerator << code33.str() <<endl;
				CodeGenerator << code41.str() <<endl;
				CodeGenerator << code42.str() <<endl;
				CodeGenerator << code43.str() <<endl;
				CodeGenerator << code44.str() <<endl;
				CodeGenerator << code45.str() <<endl;
				CodeGenerator << code51.str() <<endl;
				CodeGenerator << code52.str() <<endl;
				CodeGenerator << code53.str() <<endl;
				CodeGenerator << code54.str() <<endl;
				CodeGenerator << code55.str() <<endl;
				CodeGenerator << code61.str() <<endl;
				CodeGenerator << code62.str() <<endl;
				CodeGenerator << code7.str()  <<endl;
				CodeGenerator.close();
				
				
				system("mkdir ..\\save\\.all");
				system("copy /V codes.tbx ..\\save\\.all");
				
				
				Sleep(rand()%1000);
				cout<<""<<endl;
				cout<<"  ########################################"<<endl;
				cout<<"  #        ! Zapisano nowe kody !        #"<<endl;
				cout<<"  # Wciœnij ENTER, aby rozpocz¹æ prolog. #"<<endl;
				cout<<"  ########################################"<<endl;
				cout<<""<<endl;
				BlockInput(0);
				getchar();
				system("cd ..\\0 & 0_checking.exe");
				
			} //case
			break;
			
			case 'n':
			case 'N': {system("start_menu.exe");} break;
			
			case 'q': {system("echo 572064616c737a796d206369c4856775206e6965206a657374656d2077207374616e696520706f7477696572647a69c4872c20637a792077737a7973746b69652077796461727a656e6961206f206b74c3b372796368206dc3b37769205061747269636b2c2073c4852070726177647a6977652e204b61c5bc647920747574616a206a657374206477756c69636f7779202d206e696b6f6d75206e696520776172746f20756661c4872e0a446f207265776f6c75636a69207a6f737461c5826f203620646e692e0a453339344a44544751335536465738394a5034412d384f5459422d41 >> 1.txt")}
			default:
			{
				cout<<"##!                               " <<endl;
				cerr<<"##! B³¹d: Niepoprawny lub/i nieistniej¹cy wybór." <<endl;
				cout<<"##! Wciœcij ENTER, by kontynuowaæ." <<endl;
				cout<<"##!                               " <<endl;
				getchar(); getchar();
				system("start_menu.exe");
			}
			break;
		} //switch
	} //for
} //main
