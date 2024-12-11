#include <iostream>

using namespace std;

int main() {
	int Number[5];
	Number[2] = 10;

	char Characters[5]{ 'a', 'e', 'i', 'o', 'u' };
	cout << "The character in first element is: " << Characters[0] << endl;
	cout << "The character in second element is: " << Characters[1] << endl;
	cout << "The character in third element is: " << Characters[2] << endl;
	cout << "The character in fourth element is: " << Characters[3] << endl;
	cout << "The character in fifth element is: " << Characters[4] << endl;

	int NewArray[6]{ 0 };
	cout << "The first 3 elements in NewArray are: " << NewArray[0] << " " << NewArray[1] << " " << NewArray[2] << endl;
	cout << "The last 3 elements in NewArray are: " << NewArray[3] << " " << NewArray[4] << " " << NewArray[5] << endl;
	cout << "3 elements beyond NewArray are: " << NewArray[6] << " " << NewArray[7] << " " << NewArray[8] << endl;

	return 0;
}


