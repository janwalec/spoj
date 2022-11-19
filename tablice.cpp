#include <iostream>
#define SIZE 100
using namespace std;

int main()
{
    int how_many_operations;
    cin >> how_many_operations;

    for (int i = 0; i < how_many_operations; i++)
    {

        int number_of_cells;
        cin >> number_of_cells;

        int tab[SIZE];
        for (int i = 0; i < number_of_cells; i++)
        {
            cin >> tab[i];
        }

        for (int i = number_of_cells - 1; i >= 0; i--)
        {
            cout << tab[i] << ' ';
        }
        cout << endl;
    }

}
