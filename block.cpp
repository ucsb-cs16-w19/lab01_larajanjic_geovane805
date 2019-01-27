#include <iostream> 
using namespace std;

int main() {
	int var1, var2;
	do {
		cout << "Enter the number of rows and columns:\n";
		cin >> var1 >> var2;
		for (int i = 0; i < var1; i++) 
		{
			for (int j = 0; j < var2; j++) 
			{
				cout << "X.";
			}
			cout << endl;
		}
		cout << "Enter the number of rows and columns:" << endl;
		cin >> var1 >> var2;
	   }while(var1 > 0 && var2 > 0);

	return 0;
}
