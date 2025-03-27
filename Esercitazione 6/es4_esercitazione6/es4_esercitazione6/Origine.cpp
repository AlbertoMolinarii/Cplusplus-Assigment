#include "list.h"
#include "listTest.h"
#include "llist.h"
#include<fstream>
#include<sstream>

template <class E>
void insertion(E a[], int l, int r)
{
	for (int i = l + 1; i <= r; i++)
		for (int j = i; ((j > l) && comp(a[j - 1], a[j])); j--)
			exch(a[j - 1], a[j]);
}

int main()
{
	string nome, str;
	int numero, età;
	float voto;
	Item* array;
	studente st;
	ifstream myfile("studenti.txt");
	if (myfile.is_open())
	{
		getline(myfile, str);
		istringstream token(str);
		token >> numero;
		array = new Item[numero];
		for (int i = 0; i < numero; i++)
		{
			myfile >> st.cognome >> st.età >> st.voto;
			Item s(st);
			array[i] = s;
		}
	}

	insertion(array, 0, numero);

	return 0;
}