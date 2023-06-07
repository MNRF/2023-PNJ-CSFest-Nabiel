/*
	Input:
	5

	Output:
	3
	*/
#include <iostream>
using namespace std;

int a, b, c=1;

int main()
{
	cin >> a;
	for (int i = 1; i <= a; i++)
	{
		a -= i;
		if (a >= 0)
		{
			c++;
		}
	}
	cout << c << endl;

	return 0;
}