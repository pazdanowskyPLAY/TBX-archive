////////// BIBLIOTEKI //////////
#include <iostream>   // podstawowe komendy
#include <stdio.h>    // takie windows.h, ale te¿ na linuxie - sleep, rand itp.
#include <cstdlib>    // komendy konsolowe
#include <windows.h>  // BlockInput, zmiana katalogu roboczego
#include <conio.h>    // getchar itp.
#include <fstream>    // operacje na plikach
#include ".source/library/cursor.h"
#include ".source/library/cursor.cpp"
using namespace std;

////////// ZMIENNE, FUNKCJE I INNE //////////
string CodeInput;       // wprowadzony kod od u¿ytkownika
fstream CodeViever;     // otwieranie pliku zapisu
string Line1, Line2;    // linie do porównania zawartoœci plików zapisu
bool AntiCheater=false; // modyfikacja pliku zapisu
string CodeLine;        // linia wczytywanego urywka pliku
string LineString;      // kod z pliku
int LineNumber=1;       // numer linii wczytywanego urywka pliku
bool CodeWrong=false;



void Checking()
{
	if (CodeInput != CodeLine && CodeWrong == true)
	{
		cout<<"ER"<<endl;
		cout<<"  #" <<endl;
		CodeViever.close();
		cout<<"##!                               " <<endl;
		cerr<<"##! B³¹d: Wprowadzony kod nie istnieje w pliku zapisu albo jest przypisany do innego rozdzia³u." <<endl;
		cout<<"##! Wciœcij ENTER, by kontynuowaæ." <<endl;
		cout<<"##!                               " <<endl;
		getchar(); getchar();
		BlockInput(0);
		system("cd ..\\menu & continue.exe");
	}
	
	else if (CodeInput == CodeLine && CodeWrong == false)
	{
		if (LineNumber == 1)
		{
			CodeViever.close();
			cout<<"OK"<<endl;
			
			cout<<"  #"<<endl;
			cout<<"  # Wpisano poprawny kod do CHECKPOINT-1 dla PROLOGU." <<endl;
			cout<<"  # Wciœnij ENTER, by kontynuowaæ grê...            "<<endl;
			cout<<"  #"<<endl;
			
			BlockInput(0);
			cout<<"  # Jeszcze nie zaimplementowano..."
			getchar(); getchar();
			system("cd ..\\menu & continue.exe");
		}
		
		else if (LineNumber == 2)
		{
			CodeViever.close();
			cout<<"OK"<<endl;
			
			cout<<"  #"<<endl;
			cout<<"  # Wpisano poprawny kod do CHECKPOINT-2 dla PROLOGU." <<endl;
			cout<<"  # Wciœnij ENTER, by kontynuowaæ grê..."<<endl;
			cout<<"  #"<<endl;
			
			BlockInput(0);
			cout<<"  # Jeszcze nie zaimplementowano..."
			getchar(); getchar();
			system("cd ..\\menu & continue.exe");
		}
		
		else if (LineNumber == 3)
		{
			CodeViever.close();
			cout<<"OK"<<endl;
			
			cout<<"  #"<<endl;
			cout<<"  # Wpisano poprawny kod do CHECKPOINT-1 dla AKTU 1." <<endl;
			cout<<"  # Wciœnij ENTER, by kontynuowaæ grê..."<<endl;
			cout<<"  #"<<endl;
			
			BlockInput(0);
			cout<<"  # Jeszcze nie zaimplementowano..."
			getchar(); getchar();
			system("cd ..\\menu & continue.exe");
		}
	}
}



////////// G£ÓWNY PROGRAM //////////
int main()
{
	system("@chcp 1250");
	system("cls & title TBX [CP -2.5b DEV]");
	cout<<"" <<endl;
	
	cout<<"  UWAGA! INGERENCJA W ZAPIS/ODCZYT PLIKÓW! ROBISZ TO NA W£ASN¥ ODPOWIEDZIALNOŒÆ!" <<endl;
	cout<<"" <<endl;
	cout<<"  ##################################################" <<endl;
	cout<<"  #                                " <<endl;
	cout<<"  # Proszê wpisaæ kody:            " <<endl;
	cout<<"  #                                " <<endl;
	cout<<"  # (jeœli dopiero zaczynasz now¹ grê, wpisz [0])"<<endl;
	cout<<"  # (jeœli chcesz wyjœæ, wpisz [1])" <<endl;
	cout<<"  #                                " <<endl;
	cout<<"  ##################################################" <<endl;
	
	setCursor(25, 6); cin>>CodeInput; BlockInput(1);
	setCursor(0, 12);
	cout<<"  #                        " <<endl;
	cout<<"  # Odczytywanie pliku zapisu...";
	
	
	CodeViever.open("..\\menu\\codes.tbx", ios::in);
	if (CodeViever.good()==false)
	{
		cout<<"ER"<<endl;
		cout<<"  #" <<endl;
		CodeViever.close(); 
		cout<<"##!                               " <<endl;
		cerr<<"##! B³¹d: Plik zapisu gry nie istnieje lub jest uszkodzony." <<endl;
		cout<<"##! Wciœcij ENTER, by kontynuowaæ." <<endl;
		cout<<"##!                               " <<endl;
		getchar(); getchar();
		system("cd ..\\menu & continue.exe");
	}
	
	else
	{
		// sprawdzanie poprawnoœci plików zapisu
		fstream File1("..\\menu\\codes.tbx");
		fstream File2("..\\save\\.all\\codes.tbx");
		while (std::getline(File1, Line1) && std::getline(File2, Line2))
		{
			if (Line1.compare(Line2)!=0)
			{
				AntiCheater = true;
				File1.close();
				File2.close();
				CodeViever.close();
				break;
			}
		}
		File1.close();
		File2.close();
		
		if (AntiCheater == true)
		{
			cout<<"ER" <<endl;
			cout<<"  #" <<endl;
			system("del /S /Q ..\\menu\\codes.tbx");
			system("del /S /Q ..\\save\\.all");
			
			cout<<"##!                                              " <<endl;
			cerr<<"##! B³¹d: Plik zapisu gry zosta³ zmodyfikowany bez odpowiedniej autoryzacji." <<endl;
			cout<<"##! (WstydŸ siê, oszuœcie!)                      " <<endl;
			cout<<"##! Pliki zapisu zosta³y pomyœlnie usuniête.     " <<endl;
			cout<<"##!                                              " <<endl;
			cout<<"##! Wciœnij ENTER, by zacz¹æ grê od nowa.        " <<endl;
			cout<<"##!                                              " <<endl;
			MessageBox(NULL, "WstydŸ siê!", "TBX ACP", MB_ICONSTOP + MB_OK + MB_APPLMODAL );
			BlockInput(0);
			getchar(); getchar();
			system("cd ..\\menu & new_game.exe");
		}
		
		
		// sprawdzanie poprawnoœci wpisanego kodu
		cout<<"OK"<<endl;
		cout<<"  # Sprawdzanie poprawnoœci wprowadzonego kodu...";
		
		if (CodeInput == "0" || CodeInput == "[0]")
		{
			cout<<"NEW-GAME"<<endl;
			cout<<"  #                                      " <<endl;
			cout<<"  # Rozpoczynanie nowej gry...           " <<endl;
			cout<<"  # Wciœnij ENTER, by rozpocz¹æ historiê." <<endl;
			cout<<"  #                                      " <<endl;
			BlockInput(0);
			getchar(); getchar();
			system("cd ..\\menu & start_menu.exe"); // placeholder
		}
		
		else
		{
			while (getline(CodeViever, LineString))
			{
				switch (LineNumber)
				{
					case 1:
					case 2:  {CodeLine=LineString; Checking();} break;
					default: {continue;} break;
				}
				LineNumber++;
				Checking();
			}
			CodeWrong=true;
			Checking();
		}
	}
}