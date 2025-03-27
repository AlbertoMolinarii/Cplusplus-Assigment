//#include<list>
//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//	list<int> L;
//
//	L.push_back(1);
//	L.push_back(22);
//	L.push_back(4);
//	L.push_back(31);
//	L.push_back(4);
//	L.push_back(13);
//
//	for (list<int>::iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << " " << *it;
//	}
//
//	cout << "\n";
//	list<int>::iterator it = L.begin();
//	it++;
//	it = L.insert(it, 5);
//	it++;
//	L.insert(it, 15);
//	
//
//	for (list<int>::iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << " " << *it;
//	}
//
//	return 0;
//}
#include<list>
#include<iostream>
using namespace std;

int main()
{
	list<int> lista;

	lista.push_back(1);
	lista.push_back(22);
	lista.push_back(4);
	lista.push_back(31);
	lista.push_back(4);
	lista.push_back(13);

	for (list<int>::iterator i = lista.begin(); i != lista.begin(); i++)
	{
		cout << " " << *i;
	}

	return 0;
}