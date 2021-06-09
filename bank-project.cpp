#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <map>
using namespace std;

#define MIN_BALANCE 500
class InsufficientFunds
{
};

class Account
{
private:
    long accountNumber;
    string firstName;
    string lastName;
    float balance;
    static long NextAccountNumber;

public:
    Account() {}
    Account(string fname, string lname, float balance);
    long getAccNo() { return accountNumber; }
    string getFirstName() { return firstName; }
    string getLastName() { return lastName; }
    float getBalance() { return balance; }

    void Deposit(float amount);
    void Withdraw(float amount);
    static void setLastAccountNumber(long accountNumber);
    static long getLastAccountNumber();
    friend ofstream &operator<<(ofstream &ofs, Account &acc);
    friend ifstream &operator>>(ifstream &ifs, Account &acc);
    friend ostream &operator<<(ostream &os, Account &acc);
};
long Account::NextAccountNumber = 0;

class Bank
{
private:
    map<long, Account> accounts;

public:
    Bank();
    Account OpenAccount(string fname, string lname, float balance);
    Account BalanceEnquiry(long accountNumber);
    Account Deposit(long accountNumber, float amount);
    Account Withdraw(long accountNumber, float amount);
    void CloseAccount(long accountNumber);
    void ShowAllAccounts();
    ~Bank();
};
int main()
{
    Bank b;
    Account acc;

    int choice;
    string fname, lname;
    long accountNumber;
    float balance;
    float amount;
    cout << "***Banking System***" << endl;
    do
    {
        cout << "\n\tSelect one option below ";
        cout << "\n\t1 Open an Account";
        cout << "\n\t2 Balance Enquiry";
        cout << "\n\t3 Deposit";
        cout << "\n\t4 Withdrawal";
        cout << "\n\t5 Close an Account";
        cout << "\n\t6 Show All Accounts";
        cout << "\n\t7 Quit";
        cout << "\nEnter your choice";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter First Name";
            cin >> fname;
            cout << "Enter last Name";
            cin >> lname;
            cout << "Enter initial Balance";
            cin >> balance;
            acc = b.OpenAccount(fname, lname, balance);
            cout << endl
                 << "Congratulation Account is Created" << endl;
        }
    }