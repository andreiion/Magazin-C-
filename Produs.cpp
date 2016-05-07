#include "Produs.h"
#include <string>
#include <vector>
#include <iostream>

//Costructor
Produs::Produs(std::string nume_produs) {
    this->nume_produs = nume_produs;
}

void Produs::adauga_lot(Lot l)
{
	this->Loturi.push_back(l);
}

void Produs::set_nume_produs(std::string nume_produs) {
    this->nume_produs = nume_produs;
}
std::string Produs::get_nume_produs() {
    return this->nume_produs;
}

std::vector<Lot> Produs::get_loturi()
{
	return this->Loturi;
}

void Produs::afisare_loturi(std::string data1, std::string data2)
{
	//Daca lotul are data cuprinsa intre data1 si data2 in afisam
	// 
	for (unsigned int i = 0; i < this->Loturi.size(); i++)
	{
		//stoi - string to integer. comparam datele
		if (std::stoi(this->Loturi[i].get_data_primire()) > std::stoi(data1)
			&& std::stoi(this->Loturi[i].get_data_primire()) < std::stoi(data2))
		{
			// nume produs, data, unitate de masura, valabilitate, pret, promotie: 
			std::cout << "Data: " << this->Loturi[i].get_data_primire() << std::endl;
			std::cout << "Unitate de masura: " << this->Loturi[i].get_unitate_de_masura() << std::endl;
			std::cout << "Valabilitate: " << this->Loturi[i].get_valabilitate() << std::endl;
			std::cout << "Pret: " << this->Loturi[i].get_pret() << std::endl;
			std::cout << "Promotie: " << this->Loturi[i].get_promotie() << std::endl;
		}

	}
}

void Produs::afisare_loturi(std::string data)
{
	for (unsigned int i = 0; i < this->Loturi.size(); i++)
	{
		//Daca data de primire + termenul de valabiltiate este mai mic decat data curenta, inseamna ca n-a expirat. duh
		//Posibil sa fie invers comparatia. Vezi si tu :))
		if (std::stoi(this->Loturi[i].get_data_primire()) + this->Loturi[i].get_valabilitate() < std::stoi(data))
		{
			std::cout << "Nume: " << this->nume_produs;
			std::cout << "Data: " << this->Loturi[i].get_data_primire() << std::endl;
			std::cout << "Unitate de masura: " << this->Loturi[i].get_unitate_de_masura() << std::endl;
			std::cout << "Valabilitate: " << this->Loturi[i].get_valabilitate() << std::endl;
			std::cout << "Pret: " << this->Loturi[i].get_pret() << std::endl;
			std::cout << "Promotie: " << this->Loturi[i].get_promotie() << std::endl;
		}
	}
}