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
	double answer = 0;
	
	cout << "We will do a sum for you." << endl
		<< "How many terms do you want? ";
	cin >> howMany;
	cout << endl;
	
	if (howMany > 0) {
		for (int i = 1; i <= howMany ; i++) {
			answer += (1 / (sqrt(i) + sqrt(i +1)));
		}
	}

	cout << setprecision(2) << fixed << answer << endl;

	system("pause");
	return 0;
}
