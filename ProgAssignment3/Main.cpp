// Robert M Wood Jr.
// CPW 218
// 01/04/19
// Prog Assign 3

#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
	

	int howMany = 0;
	double awnser = 0;
	
	cout << "We will do a sum for you." << endl
		<< "How many terms do  you want? ";
	cin >> howMany;
	cout << endl;
	
	awnser = (1 / (1 + sqrt(2))); 
	if (howMany > 1) {
		for (int i = 2; i < howMany + 2; i++) {
			awnser += (1 / (sqrt(i) + sqrt(i +1)));
		}
	}

	cout << setprecision(2) << fixed <<  awnser << endl;

	system("pause");
	return 0;
}
