#ifndef ITEM_H
#define ITEM_H

#include <stdlib.h>
#include <time.h>  // Used by timing functions

#include <iostream>
using namespace std;

static int maxKey = 1000;

typedef int Key;

class Item
{
private:
    string nome, mail;
    int voto;
    Key matricola;

public:
    Item(Key ma = maxKey, string n = "", int v = 0, string m = "")
    {
        matricola = ma;
        nome = n;
        voto = v;
        mail = m;
    }
    Key key() const
    {
        return matricola;
    }
    int null()
    {
        return matricola == maxKey;
    }

    // genera casualmente i dati (chiave, valore) di un elemento
    //void random_element()
    //{
    //    keyval = 1000 * (1.0 * rand() / RAND_MAX);
    //    info = 1.0 * (1.0 * rand() / RAND_MAX);
    //}

    // legge da tastiera i dati (chiave, valore) di un elemento
    //int scan(istream& is = cin)
    //{
    //    is >> matricola >> info;
    //    return !(cin.fail());
    //}
    void show(ostream& os = cout)
    {
        os << matricola << " " << nome << " " << voto << " " << mail << endl;
    }

    string getNome() const { return nome; }
    int getVoto() const { return voto; }
    string getMail() const { return mail; }
};

inline ostream& operator<<(ostream& os, const Item& i)
{
    return os << "(" << i.key() << " " << i.getNome() << " " << i.getVoto() << " " << i.getMail() << endl;
}


#endif
