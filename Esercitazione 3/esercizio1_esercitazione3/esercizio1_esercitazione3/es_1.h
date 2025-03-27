#include<iostream>
using namespace std;

template <class T> class maggiore1
{
	T primo, secondo;

public:
	maggiore1(T p, T s) { primo = p; secondo = s; }
	T getMax() {
		T max;
		if (primo > secondo)
		{
			max = primo;
		}
		else if (secondo > primo)
		{
			max = secondo;
		}
		return max;
	}
};

template <class T> class maggiore2
{
	T primo, secondo, terzo;

public:
	maggiore2(T p, T s, T t) { primo = p; secondo = s; terzo = t; }
	T getMax() {
		maggiore1<int> max1(primo, secondo);
		maggiore1<int> max2(max1, terzo);

		return max2;
	}
};
