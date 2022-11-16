#include <iostream>

using namespace std;


int main()
{
    
        int number;
        int index=0;
        int how_many;
        cin >> how_many;

        for (int i = 0; i < how_many; i++)
        {
            index = 0;
            cin >> number;
            for (int i = number; i > 0; i--)
            {
                if (number % i == 0)
                {
                    index++;
                }
            }

            if (index == 2)
            {
                cout << "TAK\n";
            }
            if (index != 2)
            {
                cout << "NIE\n";
            }
        }
    
}

