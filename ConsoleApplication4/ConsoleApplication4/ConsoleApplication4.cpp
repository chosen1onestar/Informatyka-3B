#include <iostream>
using namespace std;

void fibonacci(int n)
	{
		int a = 0, b = 1;

		for (int i = 0; i < n; i++)
		{
			cout << b << " ";
			b += a;
			a = b - a;


		}
	}
int main()
	{
		int n;
		cout << "Ile wyrazow ciagu wypisac : ";
		cin >> n;
		fibonacci(n);

	}
