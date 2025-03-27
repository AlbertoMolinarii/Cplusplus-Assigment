#ifndef ITEM_H
#define ITEM_H

#include <stdlib.h>
#include <time.h>  // Used by timing functions

#include <iostream>
#include "llist.h"
using namespace std;

static int maxKey = 1000;

typedef int Key;

class Item
{
private:
    string info;
    Key keyval;
public:
    Item(Key k = maxKey, string i = "")
    {
        keyval = k;
        info = i;
    }
    Key key() const
    {
        return keyval;
    }
    int null()
    {
        return keyval == maxKey;
    }

    // genera casualmente i dati (chiave, valore) di un elemento
    //void random_element()
    //{
    //    keyval = 1000 * (1.0 * rand() / RAND_MAX);
    //    info = 1.0 * (1.0 * rand() / RAND_MAX);
    //}

    // legge da tastiera i dati (chiave, valore) di un elemento
    int scan(istream& is = cin)
    {
        is >> keyval >> info;
        return !(cin.fail());
    }
    void show(ostream& os = cout)
    {
        os << keyval << " " << info << endl;
    }

    string getinfo() const { return info; }

    void setinfo(string i) { info = i; }
};

inline ostream& operator<<(ostream& os, const Item& i)
{
    return os << "(" << i.key() << " " << i.getinfo() << ")";
}

// Assert: If "val" is false, print a message and terminate
// the program
inline void Assert(bool val, string s) {
    if (!val) { // Assertion failed -- close the program
        cout << "Assertion Failed: " << s << endl;
        exit(-1);
    }
}

// Print out the list (including showing position for the fence)
// Print list contents
template <typename E>
void lprint(List<E>& L) {
    float currpos = L.currPos();

    L.moveToStart();

    cout << "< ";
    int i;
    for (i = 0; i < currpos; i++) {
        cout << L.getValue() << " ";
        L.next();
    }
    cout << "| ";
    while (L.currPos() < L.length()) {
        cout << L.getValue() << " ";
        L.next();
    }
    cout << ">\n";
    L.moveToPos(currpos); // Reset the fence to its original position
}

#endif
