/*
	Input:
	3
	10
	2

	Output:
	Kiri
	*/
#include <iostream>
using namespace std;

int a, b, c;

int main()
{
	cin >> a >> b >> c;
	if (c < a)
	{
		cout << "Kiri" << endl;
	}
	else if (c > a && c < b)
	{
		cout << "Tengah" << endl;
	}
	else if (c > b)
	{
		cout << "Kanan" << endl;
	}
	else if (c == a || c == b)
	{
		cout << "Tepi" << endl;
	}
	return 0;
}