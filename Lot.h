#ifndef LOOT_H_
#define LOOT_H_

class Lot
{
private:
	std::string data_primire;
	int unitate_de_masura;
	int valabilitate;
	int pret;
	int promotie;


public:
	///Constructor
	Lot(std::string data_primire, int unitate_de_masura, int valabilitate, int pret, int promotie);
	void set_data_primire(std::string data_primire);
	std::string get_data_primire();
	void set_promotie(int promotie);
	int get_promotie();
	void set_unitate_de_masura(int unitate_de_masura);
	int get_unitate_de_masura();
	void set_pret(int pret);
	int get_pret();
	void set_valabilitate(int valabilitate);
	int get_valabilitate();
};

#endif