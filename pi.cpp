#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(3);
	int n = 0;
	cout << "Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):" << endl;
	cin >> n;
	do {
		double total = 0, value = 0;
		for (int i = 0; i <= n; i++) 
		{
			value = pow(-1,i) / (2*i + 1);
			total = total + value;
		}	
		double pi = 4 * total;

		if (n == 0) 
		{
			cout << "The approximated value of pi using " << n+1 << " term is: " << pi << endl;
	
		}
		else 
		{
			cout << "The approximated value of pi using " << n+1 << " terms is: " << pi << endl;
	
		}
		cout << "Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):" << endl;
		cin >> n;
	}while(n >= 0);

	return 0;
}
