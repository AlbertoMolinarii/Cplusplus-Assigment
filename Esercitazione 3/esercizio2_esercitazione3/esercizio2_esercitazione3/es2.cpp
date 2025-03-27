#include "es2.h"

int main()
{
	int size;
	cout << "Inserisci la dimensione dell'array:" << endl;
	cin >> size;
	int *arr;
	arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		cout << "Inserisci i numeri nell'array:" << endl;
		cin >> arr[i];
	}

	cout << "Il numero che compare piu' e':" << most_common<int>(arr, size) << endl;

	return 0;
}