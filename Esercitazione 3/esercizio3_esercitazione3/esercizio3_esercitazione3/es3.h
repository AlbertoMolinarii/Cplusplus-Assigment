#include<iostream>
#include<typeinfo>
using namespace std;

template <class T> 
class Pair
{
public:
	Pair(T f, T s)
	{
		first = f;
		second = s;
	}
	void setElement(int position, T value)
	{
		if (position == 1)
		{
			value = first;
		}
		else if (position == 2)
		{
			value = second;
		}
	}
	T getElement(int position) const
	{
		if (position == 1)
		{
			return first;
		}
		else if (position == 2)
		{
			return second;
		}
	}
	void addUp(const Pair<T>& the_pair)
	{
		first = first + the_pair.first;
		secondo = second + the_pair.second;
	}
private:
	T first;
	T second;
};