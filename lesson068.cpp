#include <iostream>
#include <array>

using namespace std;


int main() {
	std::array<int, 5> MyArray{ 1, 3, 5, 7, 9 };
	int NewArray[]{ 1, 3, 5, 7, 9 };

	std::array Values{ 1.2, 1.0, 3.1, 9.6 };

	cout << "\nMyArray elements: " << endl;
	for (int Num : MyArray) {
		cout << Num << endl;
	}

	cout << "\nNewArray elements: " << endl;
	for (int Num : NewArray) {
		cout << Num << endl;
	}

	cout << "\nValues elements: " << endl;
	for (auto Num : Values) {
		cout << Num << endl;
	}

	


	return 0;
}


