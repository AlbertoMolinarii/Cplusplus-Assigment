#include<iostream> 
#include<string>
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

int main()
{
	Persona g1("Gianni", "Morandi", 67);
	Persona g2("Francesco", "King", 33);
	Persona g3("Giacomo", "Leopardi", 45);
	cout << "Informazioni:" << endl;
	cout << g1.getInformation();
	cout << "\n" << g2.getInformation();
	cout << "\n" << g3.getInformation() << endl;

	Persona arr[3] = { g1, g2, g3 };
	
	cout << "Le informazioni dopo le modifiche sono:" << endl;
	for (int i = 0; i < 3; i++)
	{
		arr[i].setCognome("Bianchi");
		cout << arr[i].getInformation() << endl;
	}

	return 0;
}
