	#include <iostream>
	using namespace std;

	int main()
	{
		long int grupa1;
		long int grupa2;
		int how_many;
		cin >> how_many;
	
		for (int j = 0; j < how_many; j++)
		{
			cin >> grupa1;
			cin >> grupa2;
			int iloczyn = grupa1 * grupa2;
			while (grupa1 != grupa2)
			{
				if (grupa1 > grupa2)
				{
					grupa1 -= grupa2;
				}
				else
				{
					grupa2 -= grupa1;
				}
			}
			cout << iloczyn/grupa1<<endl;
		}
		return 0;
	}

