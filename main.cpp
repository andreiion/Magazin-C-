#include "student.h"
#include "personal.h"
#include "database.h"

#include <iostream>
#include <vector>
#include <algorithm>

/*bool lesserAge(const Node& p1, const Node& p2) {
	return p1.age < p2.age;
}

void node_tests() {
	Node node = Node("andrei", 20);
	Node node2("mihai", 30);

	std::vector<Node> v;


	for (unsigned int i = 0; i < 10; i++) {
		v.push_back(Node("ana", 10 - i));
	}

	for (unsigned int i = 0; i < 10; i++) {
		std::cout << v.at(i).name << " " << v.at(i).age << '\n';
	}

	std::cout << "\tSorted\n";
	std::sort(v.begin(), v.end(), lesserAge);

	for (unsigned int i = 0; i < 10; i++) {
		std::cout << v.at(i).name << " " << v.at(i).age << '\n';
	}
}
*/
int main()
{
	//node_tests();
	Database<Personal> db;
	//Database<Student> db1;

	db.run();

	getchar();
	return 0;
}