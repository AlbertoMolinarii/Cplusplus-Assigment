#include<iostream>
#include<string>
using namespace std;

class Money
{
private:
	int euros;
	int cents;

public:
	Money(int e, int c);
	int get_euros();
	void set_euros(int e);
	int get_cents();
	void set_cents(int c);
};
Money::Money(int e = 0, int c = 0)
{
	euros = e;
	cents = c;
}
int Money::get_euros()
{
	return euros;
}
void Money::set_euros(int e)
{
	euros = e;
}
int Money::get_cents()
{
	return cents;
}
void Money::set_cents(int c)
{
	cents = c;
}
Money operator+(Money m1, Money m2)
{
	int e1 = m1.get_euros();
	int c1 = m1.get_cents();
	int e2 = m2.get_euros();
	int c2 = m2.get_cents();
	
	int tot_e = e1 + e2;
	int tot_c = c1 + c2;
	
	int tot_c2;
	int tot_e2;
	if (tot_c >= 100)
	{
		tot_c2 = (tot_c - 100);
		tot_e2 = tot_e + 1;
		return (tot_e2, tot_c2);
	}
	else
	{
		return (tot_e, tot_c);
	}

}
ostream& operator<<(ostream& os, Money m)
{
	os << m.get_euros() << m.get_cents();
	return os;

}

class CreditCard
{
private:
	string nome;
	string numero;
	Money pagamenti;

public:
	CreditCard(string n, string nu);
	void print();
	Money get_totalcharges();
	void charge(string item, int e, int c);
	void setTotal(Money tot);
};
CreditCard::CreditCard(string n, string nu)
{
	nome = n;
	numero = nu;
}
void CreditCard::print()
{
	cout << nome << " " << numero << endl;
}
Money CreditCard::get_totalcharges()
{
	return pagamenti;
}
void CreditCard::charge(string item, int e, int c)
{
	Money m(e, c);
	pagamenti = pagamenti + m;
}
void CreditCard::setTotal(Money tot)
{
	pagamenti = tot;
}
