#include<iostream>
using namespace std;

int main() {
	const int N = 5;
	int a[N];
	int b[N] = { 0, -3, 6, -9, 12 };
	int c[N];
	int d[N];

	for (int i = 0; i < N; i++) {
		cout << "inserisci un numero";
		cin >> a[i];
	}

	for (int x = 0; x < N; x++) {
		c[x] = a[x] + b[(N-1) - x];
		
		if (a[x] > b[x]) {
			d[x] = 1;
		}
		else if (a[x] < b[x]) {
			d[x] = -1;
		}
		else if (a[x] == b[x]) {
			d[x] = 0;
		}
	}
	cout << c[0]<<','<<c[1]<<','<< c[2]<<','<<c[3]<<','<<c[4]<<endl;
	cout<< d[0] << ',' << d[1] << ',' << d[2] << ',' << d[3] << ',' << d[4]<<endl;
	return 0;
}