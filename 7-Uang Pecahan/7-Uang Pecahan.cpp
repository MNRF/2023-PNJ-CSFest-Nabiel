/*
	Input:
	59

	Output:
	0 1 0 1 2 0
	*/
#include <iostream>
using namespace std;

int a, b, c, d, e, f, g;

int main()
{
	cin >> a;
	while (a > 0)
	{
		if (a >= 100)
		{
			a -= 100;
			b++;
		}
		else if (a >= 50)
		{
			a -= 50;
			c++;
		}
		else if (a >= 10)
		{
			a -= 5;
			d++;
		}
		else if (a >= 5)
		{
			a -= 5;
			e++;
		}
		else if (a >= 2)
		{
			a -= 2;
			f++;
		}
		else if (a >= 1)
		{
			a -= 1;
			g++;
		}
	}
	cout << b << " " << c << " " << d << " " << e << " " << f << " " << g << endl;

	return 0;
}
