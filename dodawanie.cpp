#include <iostream>
using namespace std;



int main()
{
	int how_many;
	cin >> how_many;

	for (int i = 0; i < how_many; i++)
	{
		int quantity;
		cin >> quantity;
		int temp = 0;
		int number;
		for (int j = 0; j < quantity; j++)
		{
			cin >> number;
			temp += number;
		}
		cout << temp<<endl;
	}
}