#include<iostream>
using namespace std;
#include<math.h>
#include<cstring>

int main() {
	int arr[3];

	for (int i = 0; i < 3; i++) {
		cout << "Inserisci un numero:";
		cin >> arr[i];
	}
	float s;
	for (float i = 1; (abs(sqrt(arr[0])) - i) < 0.1; i++) {
		s = 0.5 * ((i - 1) + (arr[0] / (i - 1)));
	}
	cout << s;

	return 0;
}