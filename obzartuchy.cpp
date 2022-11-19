#include <iostream>
#include <cmath>
#define SIZE 10000

using namespace std;

int zjedza(int num_of_cookies, int x, int time[]);

int main()
{
	

	int ile_testow;
	cin >> ile_testow;
	int czas[SIZE] = {};

	for (int i = 0; i < ile_testow; i++)
	{
		int liczba_uczestnikow;
		int ilosc_ciastek_w_pudelku;
		cin >> liczba_uczestnikow;
		cin >> ilosc_ciastek_w_pudelku;

		int lacznie_ciastek = 0;
		for (int i = 0; i < liczba_uczestnikow; i++)
		{
			cin >> czas[i];
			lacznie_ciastek+=zjedza(ilosc_ciastek_w_pudelku, i, czas);
		}
		
		float ile_pudelek = (float)lacznie_ciastek / (float)ilosc_ciastek_w_pudelku;
		ile_pudelek = ceil(ile_pudelek);
		cout << ile_pudelek << endl;
		

		


	}
	return 0;
}

int zjedza(int num_of_cookies, int x, int time[])
{
	const int doba = 86400;
	int ile_zezre = doba/time[x];
	return ile_zezre;
}