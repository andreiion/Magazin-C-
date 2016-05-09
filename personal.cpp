#include "personal.h"

Personal::Personal() : nameLen(10), cityLen(10) {
	name = new char[nameLen + 1];
	city = new char[cityLen + 1];
}

Personal::Personal(char *ssn, char *n, char *cty, int y, long sal) :
	nameLen(10), cityLen(10) {
	name = new char[nameLen + 1];
	city = new char[cityLen + 1];
	strcpy(SSN, ssn);
	strcpy(name, n);
	strcpy(city, cty);
	year = y;
	salary = sal;
}

void Personal::writeToFile(std::fstream& out) const {
	out.write(SSN, 9);
	out.write(name, nameLen);
	out.write(city, cityLen);
	out.write(reinterpret_cast<const char*>(&year), sizeof(int));
	out.write(reinterpret_cast<const char*>(&salary), sizeof(long));
}

void Personal::readFromFile(std::fstream& in) {
	in.read(SSN, 9);
	in.read(name, nameLen);
	in.read(city, cityLen);
	in.read(reinterpret_cast<char*>(&year), sizeof(int));
	in.read(reinterpret_cast<char*>(&salary), sizeof(long));
}

void Personal::readKey() {
	char s[80];
	std::cout << "Enter SSN: ";
	std::cin.getline(s, 80);
	strncpy(SSN, s, 9);
}

std::ostream& Personal::writeLegibly(std::ostream& out) {
	SSN[9] = name[nameLen] = city[cityLen] = '\0';
	out << "SSN = " << SSN << ", name = " << name
		<< ", city = " << city << ", year = " << year
		<< ", salary = " << salary;
	return out;
}

std::istream& Personal::readFromConsole(std::istream& in) {
	char s[80];
	std::cout << "Enter SSN: ";
	std::cin.getline(s, 80);
	strncpy(SSN, s, 9);

	std::cout << "Name: ";
	in.getline(s, 80);
	strncpy(name, s, nameLen);

	std::cout << "City: ";
	in.getline(s, 80);
	strncpy(city, s, cityLen);

	std::cout << "Birthyear: ";
	in >> year;

	std::cout << "Salary: ";
	in >> salary;
	in.getline(s, 80); //get '\n'

	return in;
}