#include <iostream>

using namespace std;

int v1[10], v2[10], i, k, c;
int vR[10];
bool programPornit = true;

int main() {

	cout << "Introduceti primele 10 cifre , cu spatii intre cifre " << endl;
	for (i = 0; i <= 9; i++)
	{
		cin >> v1[i];
	}
	cout << "Introduceti al doilea set de 10 cifre, cu spatii intre cifre " << endl;
	for (i = 0; i <= 9; i++)
	{
		cin >> v2[i];
	}

	while (programPornit)
	{

		cout << " Introduceti 1 pentru OR ! " << endl;
		cout << " Introduceti 2 pentru AND ! " << endl;
		cout << " Introduceti 3 pentru XOR ! " << endl;
		cout << " Introduceti 4 pentru a inchide executia ! " << endl;

		cin >> c;

		if (c == 1)
		{

			for (k = 0; k <= 9; k++)
			{
				if (v1[k] == 1 || v2[k] == 1)
					vR[k] = 1;
				else
					vR[k] = 0;
				cout << vR[k] << " ";
			}
		}
		else if (c == 2)
		{
			for (k = 0; k <= 9; k++)
			{
				if (v1[k] == 1 && v2[k] == 1)
					vR[k] = 1;
				else
					vR[k] = 0;
				cout << vR[k] << " ";
			}

		}
		else if (c == 3)
		{
			for (i = 0; i <= 9; i++)
			{
				if (v1[i] == 1 && v2[i] == 0)
					vR[i] = 1;
				else if (v1[i] == 0 && v2[i] == 1)
					vR[i] = 1;
				else
					vR[i] = 0;
				cout << vR[i] << " ";
			}

		}
		else if (c == 4)
		{
			cout << "Programul este in curs de oprire !  ";
			programPornit = false;
		}
		cout << endl;
	}

	return 0;
}
