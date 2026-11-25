#include <iostream>
using namespace std;

// THE BAD DESIGN (Violation of Encapsulation)
class BadBankAccount {
public:
    double balance;

    BadBankAccount() {
        balance = 0.0;
    }
};

// THE GOOD DESIGN (Proper Encapsulation)
class GoodBankAccount {
private:
    double balance;

public:
    GoodBankAccount() {
        balance = 0.0;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    cout << "--- Testing BAD Design ---" << endl;
    BadBankAccount badAccount;
    badAccount.balance = -5000; // Direct manipulation breaks rules!
    cout << "Bad Account Balance: " << badAccount.balance << endl;

    cout << "\n--- Testing GOOD Design ---" << endl;
    GoodBankAccount goodAccount;
    goodAccount.deposit(1000);
    cout << "Good Account Balance: " << goodAccount.getBalance() << endl;

    return 0;
}

