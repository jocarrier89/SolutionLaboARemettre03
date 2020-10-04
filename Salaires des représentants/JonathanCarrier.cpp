//But :Développez un programme qui entre les ventes brutes hebdomadaires de chaque représentant et qui calcule et
//     affiche son salaire. Entrez - 1 à la valeur des ventes pour quitter le programme.
//Auteur : Jonathan Carrier
//Date : 

/*Une grosse société de produits chimiques rémunère ses représentants commerciaux à la commission. Les
représentants reçoivent 250 $ par semaine plus 7.5% de leurs ventes brutes par semaine. Par exemple, un
représentant qui vend pour 5000 $ de produits chimiques en une semaine, perçoit un salaire de 250 $ plus 7.5 % de
5000$, soit un total de 625 $.
Développez un programme qui entre les ventes brutes hebdomadaires de chaque représentant et qui calcule et
affiche son salaire. Entrez -1 à la valeur des ventes pour quitter le programme.
*/

#include <iostream>          // on ajoute une bibliothèque
using namespace std;         // permet d'éviter les std::

int main()                  // indique un panneau d'instructions
{
	setlocale(LC_ALL, ""); // Permet d'utilisé les caractères accentués


	const int SEMAINE = 250;         // Le salaire est une constante modifiable dans le futur
	const float COMISSION = 7.5 / 100; // la comission est une constante modifiable dans le futur
	const int NEG = -1; // si le futur programmeur décide de changer les paramètres


	float vente;           // La valeur qui sera entrée par l'utilisateur , float pour permettre d'entré des décimales
	float salaire;       // la valeur qui sera indiquée par le programme, float pour permettre d'entré des décimales

	// Le programme demande à l'utilisateur d'entrée une valeur

	cout << " Veuillez entrer le montant de vos ventes pour la semaine" << endl;

	/// On indique à l'utilisateur la valeur à entré pour quitter le programme

	cout << " Pour quitter le programme entrez la valeur -1"<< endl;
	// L'utilisateur entre une valeur

	cin >> vente;



	while (vente !=  NEG && vente >= 0)  // La boucle while pour permettre à l'utilisateur de ré-entré une autre valeur
	{
		// Le calcul qui détermine le salaire de l'utilisateur
		salaire = SEMAINE + (vente * COMISSION);

		// Le programme indique à l'utilisateur son salaire
		cout << " Votre salaire consistera de " << salaire << " dollars canadiens." << endl;

		// Le programme est prêt à demander une autre valeur à l'utilisateur
		cout << " Veuillez entrer le montant de vos ventes pour la semaine" << endl;
		
		cin >> vente;
		
		cout << " Pour quitter le programme entrez la valeur -1" << endl;


	}
	// pour la fonction de quitter
	
	if (vente == NEG)
{

	   cout << "Merci d'avoir utilisé le programme de détermination de salaire" << endl;
	 

}
	// Nous prévoyons une mauvaise semaine où l'utilisateur ne vendra aucun produit chimique


	if (vente <= -2)
	{
		cout << " Merci d'entré un nombre positif, il vous est impossible de faire une quantité négative de ventes" << endl;

		cin >> vente; 
			
			while (vente != -1 && vente >= 0)  // La boucle while pour permettre à l'utilisateur de ré-entré une autre valeur
			{
				// Le calcul qui détermine le salaire de l'utilisateur
				salaire = SEMAINE + (vente * COMISSION);

				// Le programme indique à l'utilisateur son salaire
				cout << " Votre salaire consistera de " << salaire << " dollars canadiens." << endl;

				// Le programme est prêt à demander une autre valeur à l'utilisateur
				cout << " Veuillez entrer le montant de vos ventes pour la semaine" << endl;

				cin >> vente;
				
				cout << " Pour quitter le programme entrez la valeur -1" << endl;


			}

	}
	


	// fin du programme

	return 0;
}




/* PLAN DE TESTS                        vente                       TOTAL       

                                         5000                         625 $
                                         1000                         325 $ 
                                         -1                           quitte 
										 -100                         veuillez entrer un nombre positif
										 1 000 000                    75 250 $


*/