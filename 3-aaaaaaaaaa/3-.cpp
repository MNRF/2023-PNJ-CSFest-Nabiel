#include <iostream>
using namespace std;

char a[10000];
char b[10000];
int c[10000] ;

int main()
{
	cin.getline(a,10000);

	for (int i = 0; i < 10000; i++)
	{
			if (a[i] == 'a' || a[i] == 'A')
			{
				b[i] = 'a';
				c[i]++;
			}else if (a[i] == 'b' || a[i] == 'B')
			{
				b[i] = 'b';
				c[i]++;
			}
			else if (a[i] == 'c' || a[i] == 'C')
			{
				b[i] = 'c';
				c[i]++;
			}
			else if (a[i] == 'd' || a[i] == 'D')
			{
				b[i] = 'd';
				c[i]++;
			}
			else if (a[i] == 'e' || a[i] == 'E')
			{
				b[i] = 'e';
				c[i]++;
			}
			else if (a[i] == 'f' || a[i] == 'F')
			{
				b[i] = 'f';
				c[i]++;
			}
			else if (a[i] == 'g' || a[i] == 'G')
			{
				b[i] = 'g';
				c[i]++;
			}
			else if (a[i] == 'h' || a[i] == 'H')
			{
				b[i] = 'h';
				c[i]++;
			}
			else if (a[i] == 'i' || a[i] == 'I')
			{
				b[i] = 'i';
				c[i]++;
			}
			else if (a[i] == 'j' || a[i] == 'J')
			{
				b[i] = 'j';
				c[i]++;
			}
			else if (a[i] == 'k' || a[i] == 'K')
			{
				b[i] = 'k';
				c[i]++;
			}
			else if (a[i] == 'l' || a[i] == 'L')
			{
				b[i] = 'l';
				c[i]++;
			}
			else if (a[i] == 'm' || a[i] == 'M')
			{
				b[i] = 'm';
				c[i]++;
			}
			else if (a[i] == 'n' || a[i] == 'N')
			{
				b[i] = 'n';
				c[i]++;
			}
			else if (a[i] == 'o' || a[i] == 'O')
			{
				b[i] = 'o';
				c[i]++;
			}
			else if (a[i] == 'p' || a[i] == 'P')
			{
				b[i] = 'p';
				c[i]++;
			}
			else if (a[i] == 'q' || a[i] == 'Q')
			{
				b[i] = 'q';
				c[i]++;
			}
			else if (a[i] == 'r' || a[i] == 'R')
			{
				b[i] = 'r';
				c[i]++;
			}
			else if (a[i] == 's' || a[i] == 'S')
			{
				b[i] = 's';
				c[i]++;
			}
			else if (a[i] == 't' || a[i] == 'T')
			{
				b[i] = 't';
				c[i]++;
			}
			else if (a[i] == 'u' || a[i] == 'U')
			{
				b[i] = 'u';
				c[i]++;
			}
			else if (a[i] == 'v' || a[i] == 'V')
			{
			b[i] = 'v';
			c[i]++;
			}
			else if (a[i] == 'w' || a[i] == 'W')
			{
			b[i] = 'w';
			c[i]++;
			}
			else if (a[i] == 'x' || a[i] == 'X')
			{
			b[i] = 'x';
			c[i]++;
			}
			else if (a[i] == 'y' || a[i] == 'Y')
			{
			b[i] = 'y';
			c[i]++;
			}
			else if (a[i] == 'z' || a[i] == 'Z')
			{
			b[i] = 'z';
			c[i]++;
			}
	}
	for (int i = 0; i < 10000; i++)
	{
		if (b[i] != ' ' && c[i]!=0)
		{
			cout << b[i] << " " << c[i] << endl;
		}
	}

	return 0;
}