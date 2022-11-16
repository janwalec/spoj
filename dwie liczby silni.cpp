#include <iostream>
using namespace std;

int main()
{
	int how_many;
	cin >> how_many;


	for (int i = 0; i < how_many; i++)
	{
		int number;
		cin >> number;
		long long int temp = 1;
		
		
		int jednosci;
		int dziesiatki;
		
		if (number < 10)
		{
			for (int j = 1; j <= number; j++)
			{
				temp = temp * j;
			}

			jednosci = temp % 10;
			dziesiatki = (temp / 10) % 10;

			cout << dziesiatki << ' ' << jednosci << endl;
		}
		else cout << '0' << ' ' << '0' << endl;


	}
	return 0;
}
