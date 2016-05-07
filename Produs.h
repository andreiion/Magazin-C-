#ifndef PRODUS_H_
#define PRODUS_H_

#include <string>
#include <vector>
#include "Lot.h"

class Produs
{
private:
	std::string nume_produs;
	std::vector<Lot> Loturi;

public:
	///Constructor
	Produs(std::string nume_produs);
	void set_nume_produs(std::string nume_produs);
	std::string get_nume_produs();
	void adauga_lot(Lot l);	
	std::vector<Lot> get_loturi();

	//pentru ca nu avem imaginatie si avem lene, punem acelasi nume
	void afisare_loturi(std::string date1, std::string date2);
	void afisare_loturi(std::string data);
};

#endif