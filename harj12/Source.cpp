/*	Ty�n nimi: Harjoitus 12
Tekij�n nimi: Mikael Schildt

Ty�n kuvaus:

Tee ohjelma, joka kysyy k�ytt�j�lt� kokonaisluvun v�lilt� 1-9 ja
tulostaa vastauksen perusteella seuraavan kuvion (jos vastaus on 6):

1
22
333
4444
55555
666666

Jokainen numero tulee tulostaa toistorakenten avulla erikseen lauseella:
cout << rivinro;


*/



#include <iostream>
using namespace std;

int main()
{
	int numero;
	int rivinro = 1;
	int sarake;

	cout << "Anna kokonaisluku (1-9) \n";
	cin >> numero;

	while (rivinro < numero + 1)
	{
		for (sarake = 1; sarake <= rivinro; sarake++)
		cout << rivinro;
		rivinro++;
		cout << "\n";
	}

}