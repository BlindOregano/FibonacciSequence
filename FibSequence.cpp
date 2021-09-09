#include <iostream>
using namespace std;

int main()
{
	int x = 1;
	long long y = 1;
	long long z = x + y;

	cout << x << endl;
	cout << y << endl;
	
	for (int i = 0; i < 51; i++) {
		cout << z << "\n";
		
		x = z;
		z += y;
		y = x;

	}

	cout << endl;
	return 0;

}