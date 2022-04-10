#include <iostream>

using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	
	int a;
	int summ;
	cout << "" << endl;
	cin >> a;
	for (int i = a; i < 501; i++)
	{
		summ = a + (a + 1);
		cout << summ << endl;
	}


	return 0;
}
