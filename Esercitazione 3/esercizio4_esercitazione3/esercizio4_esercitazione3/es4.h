#include <iostream>
using namespace std;

template <class T> class Matrix2x2
{
	T matrice00, matrice10, matrice01, matrice11;

public:
	Matrix2x2(T m00, T m10, T m01, T m11) 
	{ 
		matrice00 = m00;
		matrice10 = m10;
		matrice01 = m01;
		matrice11 = m11;
	}
	Matrix2x2<T> add(Matrix2x2 x) 
	{
		T p1, p2, p3, p4;
		p1 = matrice00 + x.matrice00;
		p2 = matrice10 + x.matrice10;
		p3 = matrice01 + x.matrice01;
		p4 = matrice11 + x.matrice11;
		Matrix2x2<T> matrice(p1, p2, p3, p4);
		cout << p1 << p2 << p3 << p4 << endl;
		return matrice;
	}
};
