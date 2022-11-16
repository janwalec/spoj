#include <iostream>
#define SIZE 200
using namespace std;

int main()
{
	int how_many;
	cin >> how_many;
	
	for (int a = 0; a < how_many; a++)
	{
		char word[SIZE];
		cin >> word;

		int index = 0;
		int quantity = 0;
		char temp = word[0];


		for (int i = index; i < SIZE; i++)
		{
			if (word[i] == '\0') break;

			temp = word[i];
			quantity = 0;
			for (int j = index; j < SIZE; j++)
			{
				if (word[j] != temp) break;
				if (word[j] == '\0') break;
				index++;
				quantity++;
			}
			if (quantity == 1) cout << temp;
			else if (quantity == 2)cout << temp << temp;
			else if (quantity > 2) cout << temp << quantity;
		}
		
		cout << endl;
	}


}

