#ifndef MAGAZIN_H_
#define MAGAZIN_H_

#include "Produs.h"
#include "Lot.h"
#include <vector>
#include <iostream>

class Magazin
{
private:
	std::vector<Produs> Produse; //lista cu prdosuele.
public:
	void adauga_produs();
	void adauga_lot(std::string nume_produs);
	void afisare_produse();
	
	std::vector<Produs> get_produse();
};

#endif