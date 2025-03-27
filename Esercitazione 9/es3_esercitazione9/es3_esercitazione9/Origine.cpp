#include "bst.h"
#include "symbol_table_item.h"
#include <fstream>
#include <sstream>
using namespace std;

int main()
{
	BST<Item, Key> bst1;
	BST<Item, Key> bst2;

	string str, nome, mail;
	int matricola, voto;
	ifstream myfile1("parteA.txt");
	if (myfile1.is_open())
	{
		while (getline(myfile1, str, ','))
		{
			istringstream token(str);
			token >> matricola;

			getline(myfile1, nome, ',');

			getline(myfile1, str, ',');
			istringstream token1(str);
			token1 >> voto;

			getline(myfile1, mail);

			Item it(matricola, nome, voto, mail);
			bst1.insert(it);
		}
	}
	myfile1.close();

	ifstream myfile2("parteB.txt");
	if (myfile2.is_open())
	{
		while (getline(myfile2, str, ','))
		{
			istringstream token1(str);
			token1 >> matricola;

			getline(myfile2, nome, ',');

			getline(myfile2, str, ',');
			istringstream token2(str);
			token2 >> voto;

			getline(myfile2, mail);

			Item it(matricola, nome, voto, mail);
			bst2.insert(it);
		}
	}

	bst1.balance();
	bst2.balance();

	cout << "Albero 1:" << endl;
	bst1.show(cout);
	cout << "\n" << "Albero 2:" << endl;
	bst2.show(cout);
	cout << "\n";
	
	float media = 0;
	for (int i = 0; i < bst1.tree_sizee(); i++)
	{
		Item it1 = bst1.select(i);

		for (int j = 0; j < bst2.tree_sizee(); j++)
		{
			Item it2 = bst2.select(j);

			if (it2.key() == it1.key())
			{
				media = (it2.getVoto() + it1.getVoto()) / 2;
			}
		}
		if (media < 18)
		{
			cout << it1.getNome() << " " << "INS" << endl;
		}
		else
		{
			cout << it1.getNome() << " " << media << endl;
		}
	}
	cout << "\n";

	int somma = 0;
	int count = 0;
	for (int i = 0; i < bst1.tree_sizee(); i++)
	{
		Item it = bst1.select(i);

		if (it.getVoto() >= 18)
		{
			somma += it.getVoto();
			count += 1;
		}
	}
	cout << "Media voti suff prima prova:" << somma / count << endl;

	int somma2 = 0;
	int count2 = 0;
	for (int i = 0; i < bst2.tree_sizee(); i++)
	{
		Item it = bst2.select(i);

		if (it.getVoto() >= 18)
		{
			somma2 += it.getVoto();
			count2 += 1;
		}
	}
	cout << "Media voti suff seconda prova:" << somma2 / count2 << endl;
	
	return 0;
}