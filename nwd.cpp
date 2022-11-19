#include <iostream>
using namespace std;

int nwd(int a, int b);

int main()
{
	int how_many;
	cin >> how_many;
	for (int i = 0; i < how_many; i++)
	{
		int first_number;
		int second_number;
		cin >> first_number;
		cin >> second_number;
		cout << nwd(first_number, second_number)<<endl;
	}
}

int nwd(int a, int b)
{
	while (a != b)
	{
		if (a > b) a -= b;
		else b -= a;
	}
	return a;

}