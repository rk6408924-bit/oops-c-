//39
#include <iostream>
using namespace std;

class Bank {
    int balance;
public:
    Bank() {
        balance = 0;
    }

    void deposit(int amt) {
        balance += amt;
    }

    void withdraw(int amt) {
        if (amt <= balance)
            balance -= amt;
        else
            cout << "Insufficient Balance\n";
    }

    void display() {
        cout << "Balance = " << balance;
    }
};

int main() {
    Bank b;
    b.deposit(1000);
    b.withdraw(300);
    b.display();
    return 0;
}