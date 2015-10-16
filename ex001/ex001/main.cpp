#include <iostream>
#include <ctime>
#include <string>


using namespace std;

void wypisz(int tab[], int rozmiar, string nametable)
{
	for (int i = 0; i < rozmiar; i++)
	{
		cout << "This is a "<< nametable << tab[i] << endl;
	}
}

int main()
{
	// stwórz tablicê 100 elemtentow¹
	// wype³nij j¹ liczbami od 1 do 100 , nie powtarzaj¹cymi siê
	// stwórz 3 tablice 
	// dla 1. tablicy wypisz liczby parzyste
	// dla 2. tablicy wypisz liczby podzielne przez 3
	// dla 3. wypisz liczby podzielne tylko przez 5.

	srand(time(NULL));
	int * randomtab = new int[10];
	for (int i = 0; i < 10; i++)
	{
		randomtab[i] = rand() % 101;
	}
	int n1 = 0;
	int n2 = 0;
	int n3 = 0;
	int * tableAlfa = new int[n1];
	int * tableBeta = new int[n2];
	int * tableTheta = new int[n3];


	for (int i = 0; i < 10; i++)
	{
		/// 1 3 5 4
		if (randomtab[i] % 2 == 0)
		{
			// i = 4
			tableAlfa[n1] = randomtab[i];
			n1++;
		}
		else if (randomtab[i] % 3 == 0)
		{
			tableBeta[n2] = randomtab[i];
			n2++;
		}
		else if (randomtab[i] % 5 == 0)
		{
			tableTheta[n3] = randomtab[i];
			n3++;
		}
	}
	//delete randomtab;

	wypisz(tableAlfa, n1, "tableAlfa: ");
	wypisz(tableBeta, n2, "tableBeta: ");
	wypisz(tableTheta, n3, "tableTheta: ");
	
	
	
	cout << "This is a random table: ";
	for (int i = 0; i < 10; i++)
	{
		cout << " " << randomtab[i];
	}
	delete randomtab;
	delete tableAlfa;
	delete tableBeta;
	delete tableTheta;

	return 0;
}

