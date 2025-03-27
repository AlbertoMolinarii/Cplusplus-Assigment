// From the software distribution accompanying the textbook
// "A Practical Introduction to Data Structures and Algorithm Analysis,
// Third Edition (C++)" by Clifford A. Shaffer.
// Source code Copyright (C) 2007-2011 by Clifford A. Shaffer.

#ifndef LISTTEST_H
#define LISTTEST_H

#include <iostream>
#include <cstdlib>
#include <string>
#include <time.h>  // Used by timing functions
using namespace std;

// Your basic int type as an object.
class Item {
private:
    int num, indice, indice_suc;
public:
    Item() {  }
    Item(int n, int i, int is) { num = n; indice = i; indice_suc = is; }
    // The following is for those times when we actually
    //   need to get a value, rather than compare objects.
    int getNumero() const { return num; }
    int getIndice() const { return indice; }
    int getIndiceSucc() const { return indice_suc; }
    void setIndiceSucc(int i) { indice_suc = i; }
    bool operator>(Item it)
    {
        if (num > it.getNumero()) return true;
        else return false;
    }
};


// Let us print out Items easily
inline ostream& operator<<(ostream& s, const Item& i)
{
    return s << i.getNumero() << " " << i.getIndice() << " " << i.getIndiceSucc();
}

// Assert: If "val" is false, print a message and terminate
// the program
inline void Assert(bool val, string s) {
    if (!val) { // Assertion failed -- close the program
        cout << "Assertion Failed: " << s << endl;
        exit(-1);
    }
}

#endif