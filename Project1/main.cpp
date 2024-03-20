#include <iostream>
#include <string>

using namespace std;

class BankAccount {
public:
	string name;
	int balance;

	string getInfo() {
		string info = "Name: " + name + ", balance: " + to_string(balance);
		return info;
	}

	void withdraw(int amount) {
		if (amount <= balance)
		{
			balance -= amount;
		}
	}

	void deposit(int amount) {
		balance += amount;
	}
private:
	//some code 
protected:
	//some code
};

string get_best_account_name(BankAccount* accounts, int size) {
	BankAccount max = accounts[0];

	for (int i = 1; i < size; i++)
	{
		if (max.balance < accounts[i].balance) {
			max = accounts[i];
		}
	}
	return max.name;
}

int main() {

	const int size = 2;

	BankAccount accounts[size];
	accounts[0].name = "12345678";
	accounts[0].balance = 1000;

	BankAccount account2;
	accounts[1].name = "87654321";
	accounts[1].balance = 5000;

	accounts[0].deposit(5000);
	accounts[1].withdraw(15000);

	cout << get_best_account_name(accounts, size) << endl;

	for (int i = 0; i < size; i++)
	{
		cout << accounts[i].getInfo() << endl;
	}

	return 0;
}
