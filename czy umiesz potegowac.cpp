#include <iostream>
using namespace std;

int jednosci(int x, int y);

int main()
{
    int how_many;
    int podstawa, wykladnik;
    
    cin >> how_many;
    for (int i = 0; i < how_many; i++)
    {
        cin >> podstawa;
        cin >> wykladnik;
        cout<<jednosci(podstawa, wykladnik)<<endl;
        
    }
    
}

int jednosci(int x, int y) //x^y
{
    if (y == 0) return 1;
    else if (x % 10 == 0) return 0;
    else if (x == 1) return 1;
    else if (x % 10 == 5) return 5;
    else if (x % 10 == 6) return 6;
    else if ((x % 10 == 2) || (x % 10 == 3) || (x % 10 == 7) || (x % 10 == 8)) y = (y % 4) + 4;
    else if ((x % 10 == 4) || (x % 10 == 9)) y = (y % 2) + 2;
    else if (y == 1)
    {
        x = x % 10;
        return x;
    }

    x = x % 10;
    int temp = x;
    
    for (int i = 1; i < y; i++)
    {
        x = x * temp;
        x = x % 10;
    } return x;
    


}