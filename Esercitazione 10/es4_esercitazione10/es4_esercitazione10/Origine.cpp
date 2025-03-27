#include<map>
#include<set>
#include<string>
#include<iostream>
#include<fstream>
using namespace std;

bool find_terno(map<string, set<int>>& l, string ruota, int n1, int n2, int n3)
{
	map<string, set<int>>::iterator it;
	it = l.find(ruota);

	for (set<int>::iterator i = (*it).second.begin(); i != (*it).second.end(); i++)
	{
		if (n1 == *i || n2 == *i || n3 == *i)
		{
			return true;
		}
	}
	return false;
}

int main()
{
	map<string, set<int>> lotto;
	typedef pair<string, set<int>> Item;

	string st;
	int n1, n2, n3, n4, n5;
	ifstream myfile("lotto.txt");
	if (myfile.is_open())
	{
		while (myfile >> st >> n1 >> n2 >> n3 >> n4 >> n5)
		{
			set<int> s;
			s.insert(n1); s.insert(n2); s.insert(n3); s.insert(n4); s.insert(n5);

			lotto.insert(Item(st, s));
		}
	}

	cout << "Firenze (11, 12, 13): " << find_terno(lotto, "Firenze", 11, 12, 13) << endl;
	cout << "Milano (46, 84, 3): " << find_terno(lotto, "Milano", 46, 84, 3) << endl;

	return 0;
}