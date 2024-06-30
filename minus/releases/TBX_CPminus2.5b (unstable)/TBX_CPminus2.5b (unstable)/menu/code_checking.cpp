////////// BIBLIOTEKI //////////
#include <iostream>   // podstawowe komendy
#include <stdio.h>    // takie windows.h, ale te� na linuxie - sleep, rand itp.
#include <cstdlib>    // komendy konsolowe
#include <windows.h>  // BlockInput, zmiana katalogu roboczego
#include <conio.h>    // getchar itp.
#include <fstream>    // operacje na plikach
#include ".source/library/cursor.h"
#include ".source/library/cursor.cpp"
using namespace std;

////////// ZMIENNE, FUNKCJE I INNE //////////
string CodeInput;       // wprowadzony kod od u�ytkownika
fstream CodeViever;     // otwieranie pliku zapisu
string Line1, Line2;    // linie do por�wnania zawarto�ci plik�w zapisu
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
		cerr<<"##! B��d: Wprowadzony kod nie istnieje w pliku zapisu albo jest przypisany do innego rozdzia�u." <<endl;
		cout<<"##! Wci�cij ENTER, by kontynuowa�." <<endl;
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
			cout<<"  # Wci�nij ENTER, by kontynuowa� gr�...            "<<endl;
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
			cout<<"  # Wci�nij ENTER, by kontynuowa� gr�..."<<endl;
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
			cout<<"  # Wci�nij ENTER, by kontynuowa� gr�..."<<endl;
			cout<<"  #"<<endl;
			
			BlockInput(0);
			cout<<"  # Jeszcze nie zaimplementowano..."
			getchar(); getchar();
			system("cd ..\\menu & continue.exe");
		}
	}
}



////////// G��WNY PROGRAM //////////
int main()
{
	system("@chcp 1250");
	system("cls & title TBX [CP -2.5b DEV]");
	cout<<"" <<endl;
	
	cout<<"  UWAGA! INGERENCJA W ZAPIS/ODCZYT PLIK�W! ROBISZ TO NA W�ASN� ODPOWIEDZIALNO��!" <<endl;
	cout<<"" <<endl;
	cout<<"  ##################################################" <<endl;
	cout<<"  #                                " <<endl;
	cout<<"  # Prosz� wpisa� kody:            " <<endl;
	cout<<"  #                                " <<endl;
	cout<<"  # (je�li dopiero zaczynasz now� gr�, wpisz [0])"<<endl;
	cout<<"  # (je�li chcesz wyj��, wpisz [1])" <<endl;
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
		cerr<<"##! B��d: Plik zapisu gry nie istnieje lub jest uszkodzony." <<endl;
		cout<<"##! Wci�cij ENTER, by kontynuowa�." <<endl;
		cout<<"##!                               " <<endl;
		getchar(); getchar();
		system("cd ..\\menu & continue.exe");
	}
	
	else
	{
		// sprawdzanie poprawno�ci plik�w zapisu
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
			cerr<<"##! B��d: Plik zapisu gry zosta� zmodyfikowany bez odpowiedniej autoryzacji." <<endl;
			cout<<"##! (Wstyd� si�, oszu�cie!)                      " <<endl;
			cout<<"##! Pliki zapisu zosta�y pomy�lnie usuni�te.     " <<endl;
			cout<<"##!                                              " <<endl;
			cout<<"##! Wci�nij ENTER, by zacz�� gr� od nowa.        " <<endl;
			cout<<"##!                                              " <<endl;
			MessageBox(NULL, "Wstyd� si�!", "TBX ACP", MB_ICONSTOP + MB_OK + MB_APPLMODAL );
			BlockInput(0);
			getchar(); getchar();
			system("cd ..\\menu & new_game.exe");
		}
		
		
		// sprawdzanie poprawno�ci wpisanego kodu
		cout<<"OK"<<endl;
		cout<<"  # Sprawdzanie poprawno�ci wprowadzonego kodu...";
		
		if (CodeInput == "0" || CodeInput == "[0]")
		{
			cout<<"NEW-GAME"<<endl;
			cout<<"  #                                      " <<endl;
			cout<<"  # Rozpoczynanie nowej gry...           " <<endl;
			cout<<"  # Wci�nij ENTER, by rozpocz�� histori�." <<endl;
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