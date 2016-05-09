#include "database.h"

template<class T>
/*Database<T>::Database() {
	std::cout << "File name: ";
	std::cin >> fName;
}*/

template<class T>
void Database<T>::add(T& d) {
	database.open(fName, ios::in | ios::out | ios::binary);
	database.seekp(0, ios::end);
	d.writeToFile(database);
	database.close();
}

template<class T>
void Database<T>::modify(const T& d) {
	T tmp;
	database.open(fName, ios::in | ios::out | ios::binary);

	while (!dabase.eof()) {
		tmp.readFromFile(database);
		if (tmp == d) { //overloaded ==
			std::cin >> tmp; //overloaded >>
			database.seekp(-d.size(), ios::cur);
			tmp.writeToFile(database);
			database.close();
			return;
		}
	}
	database.close();
	cout << "The record to be mod is not in the DB";
}

template<class T>
bool Database<T>::find(const T& d) {
	T tmp;
	database.open(fName, ios::in | ios::binary);
	while (!database.eof()) {
		tmp.readFromFile(database);
		if (tmp == d) { // overloaded ==
			database.close();
			return true;
		}
	}
	database.close();
	return false;
}

template<class T>
std::ostream& Database<T>::print(std::ostream& out) {
	T tmp;
	database.open(fName, ios::in | ios::binary);
	while (1) {
		tmp.readFromFile(database);
		if (database.eof())
			break;
		out << tmp << endl; //overloaded <<
	}
	database.out();
	return out;
}

template<class T>
void Database<T>::run() {
	char option[5];
	T rec;

	std::cout << "1. add; 2. find; 3. modify a record; 4. exit\n";
	std::cout << "Enter an option";
	std::cin.getline(option, 4); //get option along with '\n'

	while (std::cin.getline(option, 4)) {
		if (*option == '1') {
			cin >> rec; //overloaded >>
			add(rec);
		}
		else if (*option == '2') {
			rec.readKey();
			cout << "The record is ";
			if (find(rec) == false) cout << "not ";
			cout << "in the database\n";
		}
		else if (*option == '3') {
			rec.readKey();
			modify(rec);
		}
		else if (*option != '4')
			std::cout << "Wrong option\n";
		else return;

		std::cout << *this; // overloaded <<
		std::cout << "Enter an option: ";
	}
}

