#include "Lqueue.h"
#include "LqueueTest.h"
#include "queue.h"
using namespace std;

int main()
{
	int N;
	cout << "Quanti numeri vuoi inserire:" << endl;
	cin >> N;
	float num;
	LQueue<Item> Q1;
	for (int i = 0; i < N; i++)
	{
		cout << "Inserisci il " << i+1 << "'" << " numero:" << endl;
		cin >> num;
		Q1.enqueue(Item(num));
	} 
	while (Q1.length() != 1)
	{
		int count = 2;
		for (int i = 0; i < (N / count); i++)
		{
			Item q1 = Q1.dequeue();
			Item q2 = Q1.dequeue();

			int somma = q1.key() + q2.key();

			Q1.enqueue(Item(somma));
		}
		count += count;
		Lqueueprint<Item>(Q1);

		for (int i = 0; i < N / count; i++)
		{
			Item q1 = Q1.dequeue();
			Item q2 = Q1.dequeue();

			int sottr = q1.key() - q2.key();

			Q1.enqueue(Item(sottr));
		}
		count += count;
		Lqueueprint<Item>(Q1);

		for (int i = 0; i < N / count; i++)
		{
			Item q1 = Q1.dequeue();
			Item q2 = Q1.dequeue();

			int prodotto = q1.key() * q2.key();

			Q1.enqueue(Item(prodotto));
		}
		count += count;
		Lqueueprint<Item>(Q1);

		for (int i = 0; i < N / count; i++)
		{
			Item q1 = Q1.dequeue();
			Item q2 = Q1.dequeue();

			int quoz = q1.key() / q2.key();

			Q1.enqueue(Item(quoz));
		}
	}
	Lqueueprint<Item>(Q1);

	return 0;
}