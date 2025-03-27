#include<iostream> 
#include<string>
#include<fstream>
using namespace std;

class Persona
{
private:
	string nome;
	string cognome;
	int anni;

public:
	Persona(string n, string c, int a);
	string getInformation();
	void setCognome(string c);
	bool operator!= (Persona p2);
};

Persona::Persona(string n, string c, int a)
{
	nome = n;
	cognome = c;
	anni = a;
}
string Persona::getInformation()
{
	string info(nome.substr(0, 1) + "." + cognome + "," + to_string(anni));
	return info;
}
void Persona::setCognome(string c)
{
	cognome = c;
}
bool Persona::operator!= (Persona p2)
{
	if ((nome == p2.nome) && (cognome == p2.cognome) && (anni == p2.anni))
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	Persona g1("Gianni", "Morandi", 67);
	Persona g2("Gianni", "Morandi", 67);
	//Persona g2("Francesco", "King", 33);
	
	ofstream myfile("output.txt");
	if (myfile.is_open())
	{
		if (g1.operator!=(g2) == true)
		{
			myfile << "UGUALI";
		}
		else
		{
			myfile << "DIVERSI";
		}
	}
	else
	{
		cout << "Non riesco ad aprire il file";
	}

	return 0;
}