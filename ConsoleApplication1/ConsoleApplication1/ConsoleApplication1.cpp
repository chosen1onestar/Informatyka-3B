#include <iostream>
using namespace std;

void cesar(int k, char tab[])
{
	int dl = strlen(tab); 

	if (!(k >= -26 && k <= 26)) return;

	if (k >= 0)
		for (int i = 0; i < dl; i++)
			if (tab[i] + k <= 'a')
				tab[i] += k;
	else
		tab[i] = tab[i] + k - 26;
	else
		for (int i = 0; i < dl; i++)
			if (tab[i] + k >= 'z')
				tab[i] += k;
	else
		tab[i] = tab[i] + k + 26;

}


int main()
{
	int k;
	char tab[100];
	
	cout << "Slowo:";
	cin >> tab;

	cout << "Numer (-26 <--> 26):";
	cin >> k;

	cesar(k, tab);

	cout << "zaszyfrowane:" << tab << endl;

	cesar(-k, tab);

	cout << "rozszyfrowane:" << tab << endl;

	return 0;
}
