#include <iostream>
#include <ctime>


using namespace std;

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

	int * tableAlfa = new int[];
	int * tableBeta = new int[];
	int * tableTheta = new int[];


	for (int i = 0; i < 10; i++)
	{
		if (randomtab[i] % 2 == 0)
			tableAlfa[i] = randomtab[i];
		else if (randomtab[i] % 3 == 0)
			tableBeta[i] = randomtab[i];
		else if (randomtab[i] % 5 == 0)
			tableTheta[i] = randomtab[i];
	}
	delete randomtab;

	for (int i = 0; i < 10; i++)
	{
		cout << "This is a table Alfa" << tableAlfa[i] << endl;
		cout << "This is a table Beta" << tableBeta[i] << endl;
		cout << "This is a table Theta" << tableTheta[i] << endl;
	}
	
	return 0;
}
