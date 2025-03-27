#include<iostream>
#include "heap.h"
using namespace std;

int main()
{
	PQ<int> pq(50);
	
	pq.insert(4);
	pq.insert(3);
	pq.insert(2);
	pq.insert(6);

	int costo_tot = 0;

	for (int i = 1; i < 4; i++)
	{
		int n1 = pq.getmin();
		int n2 = pq.getmin();

		costo_tot += n1 + n2;
		int n_tot = n1 + n2;

		pq.insert(n_tot);
	}
	cout << costo_tot;

	return 0;
}