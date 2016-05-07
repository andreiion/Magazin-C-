#include "magazin.h"
#include <iostream>

int main ()
{
    Magazin magazin;

	//Task 1 - adaugarea produsului nou
	//Atentie! Data se introduce YY/MM/DD
    int numar_de_loturi;
    std::cout << "Numarul de produse: ";
    std::cin >> numar_de_loturi;
    while (numar_de_loturi > 0)
    {
        magazin.adauga_produs();
        numar_de_loturi--;
    }

	//Task 2 - afisarea tuturor produselor pe care magazinul le poate comercializa
	magazin.afisare_produse();

	//Task 3 - adauga un lot dintr-un produs
	std::cout << "Numele produslui: ";
	std::string nume_produs;
	std::cin >> nume_produs;
	magazin.adauga_lot(nume_produs);

	//Task 4 - Afisarea tuturor loturilor de produse care au fost primite de magazin
	//        intre 2 date calendaristice
	std::string data1, data2;
	std::cout << "Alege 2 date calendaristice':";
	std::cin >> data1 >> data2;
	for (unsigned int i = 0; i < magazin.get_produse().size(); i++)
	{
		magazin.get_produse()[i].afisare_loturi(data1, data2);
	}
	
	//Task 5 - Afisarea tutor loturilor care pot fi comercializate de magazin la data curenta
	//        (care sunt nevide si care nu sunt expirate)
	std::string data;
	std::cout << "Ziua in care se comercializeaza: ";
	std::cin >> data;
	for (unsigned int i = 0; i < magazin.get_produse().size(); i++)
	{
		magazin.get_produse()[i].afisare_loturi(data);
	}
	//Task 6 - a vinde o anumita cantitate de produs pe care il are in magazin

	getchar();
    return 0;
}
