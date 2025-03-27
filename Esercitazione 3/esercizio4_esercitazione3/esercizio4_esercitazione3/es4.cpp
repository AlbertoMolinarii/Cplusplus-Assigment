#include "es4.h"

int main()
{
	Matrix2x2<int> matrice1(2, 4, 5, 6);
	Matrix2x2<int> matrice2(1, 2, 3, 4);
	matrice1.add(matrice2);
	//3, 6, 8, 10
	return 0;
}