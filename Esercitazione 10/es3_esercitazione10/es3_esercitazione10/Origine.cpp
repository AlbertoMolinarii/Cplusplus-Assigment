#include<list>
#include<queue>
#include<iostream>
#include<string>
using namespace std;

int main()
{
	list<queue<int>> L;
	queue<int> Q1;
	queue<int> Q2;
	queue<int> Q3;
	queue<int> Q4;

	Q1.push(30); Q1.push(12); Q1.push(1); Q1.push(203); Q1.push(10);
	Q2.push(7);
	Q3.push(14); Q3.push(29); Q3.push(45); Q3.push(100);
	Q4.push(2); Q4.push(13); Q4.push(8);

	L.push_back(Q1);
	L.push_back(Q2);
	L.push_back(Q3);
	L.push_back(Q4);

	list<queue<int>>::iterator last = L.end();
	list<queue<int>>::iterator penul = --last;

	for (list<queue<int>>::iterator it = L.begin(); it != penul; it++)
	{
		while ((*it).size() > 0)
		{
			int elem = (*it).front();
			(*it).pop();

			list<queue<int>>::iterator succ = it;
			++succ;
			(*succ).push(elem);
		}
	}

	for (list<queue<int>>::iterator it = L.begin(); it != L.end(); it++)
	{
		while (!(*it).empty())
		{
			int elem = (*it).front();
			cout << elem << " ";
			(*it).pop();
		}
		cout << endl;
	}

	return 0;
}