#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    int accountNumber;
    float balance;

public:
    void initialize(string name, int accNo, float bal) {
        accountHolder = name;
        accountNumber = accNo;
        balance = bal;
    }

    void deposit(float amount) {
        balance += amount;
        cout << accountHolder << " Deposited Rs. " << amount << endl;
    }

    void withdraw(float amount) {
        const float serviceCharge = 50.0f;
        if (amount + serviceCharge > balance) {
            cout << accountHolder << " Withdrawal failed. Not enough balance." << endl;
        } else {
            balance -= (amount + serviceCharge);
            cout << accountHolder << " Withdrew Rs. " << amount
                 << " (Service charge Rs. " << serviceCharge << ")" << endl;
        }
    }

    void applyInterest(float rate) {
        float interest = balance * rate;
        balance += interest;
        cout << accountHolder << " Interest of Rs. " << interest << " applied." << endl;
    }

    void display() {
        cout << "\nAccount Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: Rs. " << balance << endl;
    }
};

int main() {
    BankAccount acc1, acc2;

    acc1.initialize("ALICE", 101, 5000);
    acc2.initialize("BOB", 102, 3000);

    // Alice's transactions
    acc1.deposit(1500);
    acc1.withdraw(2000);
    acc1.applyInterest(0.05);

    // Bob's transactions
    acc2.withdraw(3500); // Should fail
    acc2.withdraw(1000);
    acc2.deposit(500);
    acc2.withdraw(2000);

    // Display account summaries
    acc1.display();
    acc2.display();

    return 0;
}

