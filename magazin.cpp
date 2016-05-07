#include "Magazin.h"
#include "Produs.h"
#include <vector>
#include <iostream>

std::vector<Produs> Magazin::get_produse()
{
	return this->Produse;
}

void Magazin::adauga_produs()
{
	//Presupunem: atunci cand adaugam un produs adaugam si un lot

    std::string nume_produs;
    std::string data;
    int unitate_de_masura;
    int valabilitate;
    int pret;
    bool promotie;

    std::cout << "Inrodu datele in ordinea: nume produs, data, unitate de masura, valabilitate, pret, promotie: " << std::endl;
    std::cin >> nume_produs;
    std::cin >> data;
    std::cin >> unitate_de_masura;
    std::cin >> valabilitate;
    std::cin >> pret;
    std::cin >> promotie;


    Lot lot = Lot(data, unitate_de_masura, valabilitate, pret, promotie);
    Produs pr = Produs(nume_produs);
    pr.adauga_lot(lot);

    this->Produse.push_back(pr);
}
void Magazin::adauga_lot(std::string nume_produs)
{
	//Gasim produsul cu numele cautat si adaugam un lot

	for (int i = 0; i < this->Produse.size(); i++)
	{
		if (this->Produse[i].get_nume_produs().compare(nume_produs) == 0)
		{
			//Daca am gasit produsul, atunci adaugam
			std::string data;
			int unitate_de_masura;
			int valabilitate;
			int pret;
			bool promotie;

			std::cout << "Inrodu lotul in ordinea: data, unitate de masura, valabilitate, pret, promotie: " << std::endl;

			std::cin >> data;
			std::cin >> unitate_de_masura;
			std::cin >> valabilitate;
			std::cin >> pret;
			std::cin >> promotie;

			Lot lot = Lot(data, unitate_de_masura, valabilitate, pret, promotie);
			this->Produse[i].adauga_lot(lot);
		}
	}
}
	
void Magazin::afisare_produse()
{
    //std::cout << "Avem " << this->Produse.size() << " produse";
	//std::cout << "Avem " << this->Produse[0].get_loturi().size() << " loturi";
	std::cout << "Putem comercializa urmatoarele produse: ";
    for (unsigned int i = 0 ; i < this->Produse.size(); i++)
    {
		std::cout << this->Produse[i].get_nume_produs();
            
		/*std::cout << "Data: " << this->Produse[i].get_loturi() << std::endl;
        std::cout << "Am primit: " << this->Produse[i].afisare_loturi()  << " u.m." << std::endl;
        std::cout << "Termen de valabilitate: " << this->Produse[i].get_valabilitate() << " zile " << std::endl;
        std::cout << "Pret: " << this->Produse[i].get_pret() << " / u.m. " << std::endl;

        if ( this->Produse[i].get_promotie() == 0)
        {
            std::cout << "Nu vem reducere" << std::endl;
        }
        else
            std::cout << "Avem reducere" << this->Produse[i].get_promotie() <<std::endl;
        */
    }
	std::cout << std::endl;
}

