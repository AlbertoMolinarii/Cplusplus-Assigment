#include "heap.h"
#include<iostream>
using namespace std;

int main()
{
	PQ<int> pq(100);

	pq.insert(10);
	pq.insert(20);
	pq.insert(65);
	pq.insert(1);
	pq.insert(4);
	pq.insert(7);

	cout << pq.getmin() << endl;
	cout << pq.getmin() << endl;
	cout << pq.getmin() << endl;

	return 0;
}