// But:
// Auteur:
// Date:







#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	int iRandom;
	// permet de m�moriser le nombre choisi al�atoirement par l�ordinateur
	srand(time(0));
	// pour activer l�al�atoire dans le programme
	iRandom = rand() % 101; // l�ordinateur calcule un nombre al�atoire entre 0 et 100 et le stocke dans iRandom
	// La variable qui sera entr�e par l'utilisateur
	int valeur;

	// on doit cr�er une boucle qui aura une limite, la fonction for est la mieux adapt� � cela
	
	// � l'int�rieur du for, on initialise un compteur et on lui donne une limite de 5 fois
	for (int compteur = 1; compteur <= 5; compteur++)
	{
		// on demande ici � l'utilisateur d'entrer la valeur qui sera v�rifi�e
		cout << " Bienvenue, vous avez 5 chances pour d�terminer si votre chiffre est un des chiffres choisi par l'algorithme : " << endl;
		cin >> valeur;

		// Si la valeur entr�e par l'utilisateur est la bonne, il a gagn�
		if (valeur == iRandom)
		{
			cout << "Vous avez gagn�!";
			// Le programme indique le nombre d'essais que l'utilisateur avait encore pour deviner la valeur de iRandom
			cout << " Vous aviez toujours " <<  ( 5- compteur) << " essais, f�licitations!!"<<endl;

		}
		else
		{
			// Si l'utilisateur entre une valeur plus grande, le programme le lui indique avec son nombre d'essais restant
			if (valeur > iRandom)
			{
				cout << "Vous avez perdu, le nombre al�atoire est inf�rieur au v�tre." << endl;
				cout << " Il vous reste " << (5- compteur) << " essais!" << endl;
			}
			// Si l'utilisateur entre une valeur plus petite, le programme le lui indique avec son nombre d'essais restant
			else
			{
				cout << "Vous avez perdu, le nombre al�atoire est sup�rieur au v�tre." << endl;
				cout << " Il vous reste " << (5 - compteur) << " essais!" << endl;
			}


		}



	}


	return 0;// fin du programme
}

/* Plan de test?             *** Je ne comprends pas comment faire un plan de test pour ce programme
* 






*/

