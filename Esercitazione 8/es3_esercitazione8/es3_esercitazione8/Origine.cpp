#include "heap.h"
#include "listTest.h"
using namespace std;

const int k = 3;
const int n = 4;

int main(int argc, char** argv)
{
	int arr[k][n] = { {1, 3, 5, 7}, {2, 4, 6, 8}, {0, 9, 10, 11} };
	int arr2[k * n];
	PQ<Item> pq(k);

	for (int i = 0; i < k; i++)
	{
		pq.insert(Item(arr[i][0], i, 1));
	}
	
	for (int i = 0; i < k * n; i++)
	{
		Item it = pq.getmin();
		arr2[i] = it.getNumero();
		if (it.getIndiceSucc() < n)
		{
			pq.insert(Item(arr[it.getIndice()][it.getIndiceSucc()], it.getIndice(), it.getIndiceSucc()+1));
		}
		//pq.insert(Item(arr[it.getIndice()][it.getIndiceSucc()], i, i + 1));
		//cout << arr2[i] << endl;
	}

	for (int i = 0; i < k * n; i++)
	{
		cout << arr2[i] << endl;
	}

	return 0;
}