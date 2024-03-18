#include <iostream>

using namespace std;

class BankAccount {
public:
	string name;
	int balance;
private:
	//some code 
protected:
	//some code
};

int main() {

	const int size = 2;

	BankAccount accounts[size];
	accounts[0].name = "12345678";
	accounts[0].balance = 1000;

	BankAccount account2;
	accounts[1].name = "87654321";
	accounts[1].balance = 5000;

	BankAccount max = accounts[0];

	for (int i = 1; i < size; i++)
	{
		if (max.balance < accounts[i].balance) {
			max = accounts[i];
		}
	}

	cout << max.name;

	return 0;
}