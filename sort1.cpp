#include <iostream>
#include <math.h>

#define SIZE 1000
using namespace std;

double odleglosc(int X[], int Y[], int i);

int main()
{
    int operations;
    cin >> operations;
    
    for (int a = 0; a < operations; a++)
    {
        int points;
        cin >> points;
        
        string znak[SIZE];
        int wspolrzednaX[SIZE];
        int wspolrzednaY[SIZE];
        double odcinek[SIZE];
        for (int b = 0; b < points; b++)
        {
            cin >> znak[b];
            cin >> wspolrzednaX[b];
            cin >> wspolrzednaY[b];
            odcinek[b] = odleglosc(wspolrzednaX, wspolrzednaY, b);
        }
       
       
        for (int i=0; i<points; i++)
        {
            for (int j = 1; j < points - i; j++) 
            {
                if (odcinek[j - 1] > odcinek[j])
                {
                    int tempX = wspolrzednaX[j - 1];
                    wspolrzednaX[j - 1] = wspolrzednaX[j];
                    wspolrzednaX[j] = tempX;

                    int tempY = wspolrzednaY[j - 1];
                    wspolrzednaY[j - 1] = wspolrzednaY[j];
                    wspolrzednaY[j] = tempY;

                    string TEMP = znak[j - 1];
                    znak[j - 1] = znak[j];
                    znak[j] = TEMP;

                    double tempL = odcinek[j - 1];
                    odcinek[j - 1] = odcinek[j];
                    odcinek[j] = tempL;

                }
            }     
       }

        cout << endl;
        for (int b = 0; b < points; b++)
        {
            cout <<znak[b]<<' '<<wspolrzednaX[b]<<' '<< wspolrzednaY[b] << endl;
        }
        cout << endl;
    }


}

double odleglosc(int X[], int Y[], int i)
{
    double length = sqrt(X[i] * X[i] + Y[i] * Y[i]);
    return length;
}