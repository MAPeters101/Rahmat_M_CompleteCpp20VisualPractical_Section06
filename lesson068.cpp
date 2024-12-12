#include <iostream>
#include <array>

using namespace std;


int main() {
	std::array<int, 5> MyArray{ 1, 3, 5, 7, 9 };
	int NewArray[]{ 1, 3, 5, 7, 9 };

	std::array Values{ 1.2, 1.0, 3.1, 9.6 };

	//cout << "\nMyArray elements: " << endl;
	//for (int Num : MyArray) {
	//	cout << Num << endl;
	//}

	//cout << "\nNewArray elements: " << endl;
	//for (int Num : NewArray) {
	//	cout << Num << endl;
	//}

	//cout << "\nValues elements: " << endl;
	//for (auto Num : Values) {
	//	cout << Num << endl;
	//}

	Values.fill(3.1415);
	cout << "\nValues elements after fill: " << endl;
	for (auto Num : Values) {
		cout << Num << endl;
	}

	Values.at(0) = 4.3;
	Values.at(1) = 5.2;
	Values.at(2) = 2.9;
	Values.at(3) = 0.4;

	cout << "\nValues elements after after at(): " << endl;
	cout << Values.at(0) << endl;
	cout << Values.at(1) << endl;
	cout << Values.at(2) << endl;
	cout << Values.at(3) << endl;
	//cout << Values.at(7) << endl;

	cout << "\nValues elements after after at() using []: " << endl;
	cout << Values[0] << endl;
	cout << Values[1] << endl;
	cout << Values[2] << endl;
	cout << Values[3] << endl;
	//cout << Values[7] << endl;







	return 0;
}


