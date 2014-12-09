// HARJOITUS 18
// Harri Vastamäki
// IIOS14S1

//A kohta 
/*#include <iostream>
using namespace std;

struct KOIRAINFO
{
int ika;
char nimi[20];
};

void main()
{
const int MAX_KOIRA = 5;
KOIRAINFO koira[5];
int ind;
for (ind = 0; ind < MAX_KOIRA; ind++)
{
cout << "Anna " << ind+1 << ". koiran nimi ja ika: ";
cin >> koira[ind].nimi >> koira[ind].ika;
}
cout << "Koirien tiedot" << endl;
for (ind = 0; ind < MAX_KOIRA; ind++)
{
cout << "Koiran " << ind + 1 << " nimi ja ika: ";
cout << koira[ind].nimi << " " << koira[ind].ika << endl;
}
cout << endl << "Sorting..." << endl << endl;
for (int i = 0; i < MAX_KOIRA - 1; i++)
for (int j = i + 1; j < MAX_KOIRA; j++)
if (koira[i].ika > koira[j].ika)
{
KOIRAINFO tmp = koira[j];
koira[j] = koira[i];
koira[i] = tmp;
}
cout << "Koirat ikajarjestyksessa" << endl;
for (ind = 0; ind < MAX_KOIRA; ind++)
{
cout << koira[ind].nimi << " " << koira[ind].ika << endl;
}
cout << endl;
}*/

//B kohta
#include <iostream>
using namespace std;

struct KOIRAINFO
{
	int ika;
	char nimi[20];
};

void main()
{
	const int MAX_KOIRA = 5;
	KOIRAINFO koira[5];
	int ind;
	for (ind = 0; ind < MAX_KOIRA; ind++)
	{
		cout << "Anna " << ind + 1 << ". koiran nimi ja ika: ";
		cin >> koira[ind].nimi >> koira[ind].ika;
	}
	cout << "Koirien tiedot" << endl;
	for (ind = 0; ind < MAX_KOIRA; ind++)
	{
		cout << "Koiran " << ind + 1 << " nimi ja ika: ";
		cout << koira[ind].nimi << " " << koira[ind].ika << endl;
	}
	cout << endl << "Sorting..." << endl << endl;
	for (int i = 0; i < MAX_KOIRA - 1; i++)
		for (int j = i + 1; j < MAX_KOIRA; j++)
			if (strcmp(koira[i].nimi, koira[j].nimi) > 0)
			{
		KOIRAINFO tmp = koira[j];
		koira[j] = koira[i];
		koira[i] = tmp;
			}
	cout << "Koirat ikajarjestyksessa" << endl;
	for (ind = 0; ind < MAX_KOIRA; ind++)
	{
		cout << koira[ind].nimi << " " << koira[ind].ika << endl;
	}
	cout << endl;
}