#include "es_1.h"

int main()
{
	maggiore1<int> a(50, 25);
	cout << "Il maggiore tra i due valori e':" << a.getMax() << endl;

	maggiore2<int> b(100, 120, 20);
	cout << "Il maggiore tra i tre numeri e'" << b.getMax() << endl;

	return 0;
}
