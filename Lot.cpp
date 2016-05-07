#include<string>
#include "Lot.h"

Lot::Lot(std::string data_primire, int unitate_de_masura, int valabilitate, int pret, int promotie) {
    this->data_primire = data_primire;
    this->unitate_de_masura = unitate_de_masura;
    this->valabilitate = valabilitate;
    this->pret = pret;
    this->promotie = promotie;
}

///Setteri si getteri
void Lot::set_data_primire(std::string data_primire) {
    this->data_primire = data_primire;
}
std::string Lot::get_data_primire() {
return this->data_primire;
}

void Lot::set_promotie(int promotie) {
    this->promotie = promotie;
}
int Lot::get_promotie() {
return this->promotie;
}

void Lot::set_unitate_de_masura(int unitate_de_masura) {
    this->unitate_de_masura = unitate_de_masura;
}
int Lot::get_unitate_de_masura() {
    return this->unitate_de_masura;
}

void Lot::set_pret(int pret) {
    this->pret = pret;
}
int Lot::get_pret() {
    return this->pret;
}

void Lot::set_valabilitate(int valabilitate) {
    this->valabilitate = valabilitate;
}
int Lot::get_valabilitate() {
    return this->valabilitate;
}
