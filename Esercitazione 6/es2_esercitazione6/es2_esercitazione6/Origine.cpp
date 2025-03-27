#include "alist.h"
#include "list.h"
#include "listTest.h"
#include<fstream>
#include<cstring>
#include<sstream>
using namespace std;

void selectionsort(List<Item>& L) {
	int min_pos;
	Item min_element;
	// se lunghezza <2 non fai nulla
	for (int i = 0; i < L.length() - 1; i++) {
		L.moveToPos(i);
		min_element = L.getValue();
		min_pos = i;
		for (int j = i + 1; j < L.length(); j++) {
			L.moveToPos(j);
			Item it_temp = L.getValue();
			if (it_temp.getCognome() < min_element.getCognome())
			{
				min_pos = L.currPos();
				min_element = it_temp;
			}
			else if (it_temp.getCognome() == min_element.getCognome())
			{
				if (it_temp.getNome() < min_element.getNome())
				{
					min_pos = L.currPos();
					min_element = it_temp;
				}
				else if (it_temp.getNome() == min_element.getNome())
				{
					if (it_temp.getAnno() < min_element.getAnno())
					{
						min_pos = L.currPos();
						min_element = it_temp;
					}
					else if (it_temp.getAnno() == min_element.getAnno())
					{
						if (it_temp.getMese() < min_element.getMese())
						{
							min_pos = L.currPos();
							min_element = it_temp;
						}
						else if (it_temp.getMese() == min_element.getMese())
						{
							if (it_temp.getGiorno() < min_element.getGiorno())
							{
								min_pos = L.currPos();
								min_element = it_temp;
							}
						}
					}
				}
			}
		}
		L.moveToPos(min_pos);
		Item it_temp = L.remove();
		L.moveToPos(i);
		L.insert(it_temp);
	}
}

int main()
{
	AList<Item> L;

	string nome, cognome, data;
	int giorno, mese, anno;
	ifstream myfile("agenda.txt");
	if (myfile.is_open())
	{
		while (myfile >> nome >> cognome >> data)
		{
			giorno = stoi(data.substr(0, 2));
			mese = stoi(data.substr(3, 5));
			anno = stoi(data.substr(6, 10));

			Item it(nome, cognome, giorno, mese, anno);
			L.insert(it);
		}
		myfile.close();
	}

	lprint(L);
	selectionsort(L);
	lprint(L);


	return 0;
}