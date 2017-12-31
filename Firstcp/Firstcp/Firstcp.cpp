// Firstcp.cpp : definisce il punto di ingresso dell'applicazione console.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int fermati;
	int numeroUno;
	int NumeroDue;
	int risultato;
	int caso;
	
	///string n;
	
	cout << "Calculator C++ by Kirbiflint" << endl;
	cout << endl<< "Enter your first number: ";
	cin >> numeroUno;
	cout << endl << "1: addition";
	cout << endl << "2: Subtract ";
	cout << endl << "3: multiply ";
	cout << endl << "4: division  " << endl;
	cout << endl << "Inserisci: ";
	cin >> caso;
	cout << endl << "Enter your second number: ";
	cin >> NumeroDue;
	switch (caso)
	{
	

	case 1:
		risultato = numeroUno + NumeroDue;
		cout << endl << "Result is: " << risultato;
		cin >> fermati;
		break;


	case 2:
		risultato = numeroUno - NumeroDue;
		cout << endl << "Result is: " << risultato;
		cin >> fermati;
		break;

	case 3:
		risultato = numeroUno * NumeroDue;
		cout << endl << "Result is: " << risultato;
		cin >> fermati;
		break;

	case 4:
		risultato = numeroUno / NumeroDue;
		cout << "Result is: " << risultato;
		cin >> fermati;
		break;


	}
	//cout << endl << "Inserisci il secondo Il secondo: ";
	//cin >> NumeroDue;
	///cout << "La somma equivale a " +  numeroUno + NumeroDue;
	//cout << "Il risultato e': " << somma;
	///cin >> fermati;
	
	



    return 0;
}



