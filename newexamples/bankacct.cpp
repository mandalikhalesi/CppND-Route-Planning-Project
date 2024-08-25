#include <iostream>
#include <string>
#include <iostream>
using namespace std;

class BankAccount
{
  private:
    // TODO: declare member variables
    int acctnumber;
    string acctholder;
    double balance;

  public:
    // TODO: declare setters
    int get_acctnumber(){
        return acctnumber;
    }

    string get_acctholder(){
        return acctholder;
    }

    double get_balance(){
        return balance;
    }

    // TODO: declare getters
    void set_acctnumber(int acctnumber){
        this->acctnumber = acctnumber;
    }

    void set_acctholder(string acctholder){
        this->acctholder = acctholder;
    }

    void set_balance(double balance){
        this->balance = balance;
    }
};

int main(){
    // TODO: instantiate and output a bank account
    BankAccount account;
    account.set_acctnumber(1234098765);
    account.set_acctholder("Mr John Doe");
    account.set_balance(100000.2);

    cout << "Acct info:" << "\n";
    cout << "---START--" << "\n";
    cout << "Account no: " << account.get_acctnumber() << "\n";
    cout << "Account holder name: " << account.get_acctholder() << "\n";
    cout << "Account balance (latest): " << account.get_balance() << "\n";
    cout << "---END----" << "\n";

}