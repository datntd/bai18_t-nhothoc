#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	cout << "|Tinh so thoc tren ban co |\n";
	int so0;
	double tongthoc = 0;
		
		cout << "nhap so o: "; cin >> so0;
		for (int i = 0; i < so0; i++)

		{
			cout << "0 thu " << i + i << " co " << pow(2, i) << "thoc\n";
			tongthoc = tongthoc + pow(2, i);
		}
		cout << "Tong so thoc la: " << tongthoc;
			return 0;
		}	