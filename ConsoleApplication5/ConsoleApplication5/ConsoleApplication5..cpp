
#include<iostream>
using namespace std;

long tab[15]={ 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };


int szukac(int l, int p, long szukana)
{
	int sr;
	while (l <= p)
	{
		sr = (l + p) / 2;

		if (tab[sr] == szukana)
			return sr;

		if (tab[sr] > szukana)
			p = sr - 1;
		else
			l = sr + 1;
	}

	return -1; 
}
int main()
{
	long n, szukana;

	cin >> n; 

	for (int i = 0; i < n; i++)
		cin >> tab[i]; 
	cin >> szukana;

	int pozycja = szukac(0, n - 1, szukana);

	if (pozycja == -1)
		cout << "Liczba " << szukana << " nie występuje w zbiorze" << endl;
	else
		cout << "Liczba " << szukana << " wystepuje w zbiorze w komorce o indeksie" << pozycja << endl;

	return 0;
}