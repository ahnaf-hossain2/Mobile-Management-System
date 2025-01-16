#include <iostream>
#include <string>
using namespace std;

class Mobile
{
private:
    string owner;
    string number;
    string os;
    double initialBalance;
    bool lockstatus;
    int password;
public:
    Mobile (string owner, string number, string os, double initialBalance, int password)
    {
        // use setter methods to set the values of the private variables but it can be done using ( this-> )pointer also.
        setOwner(owner);
        setNumber(number);
        setOs(os);
        setInitialBalance(initialBalance);
        setPassword(password);
        setLockStatus(true); // Here I set the lock status value by using setter method. Also I used true because I want to lock the phone.
    }
    string getOwner() { return owner;}
    string getNumber() {return number;}
    string getOs() { return os; }
    double getInitialBalance(){ return initialBalance; }
    int getPassword() { return password; }

    void setOwner(string owner) { this->owner = owner; }
    void setNumber(string number) { this->number = number; }
    void setOs(string os) { this->os = os; }
    void setInitialBalance(double initialBalance) { this->initialBalance = initialBalance; }
    void setPassword(int password) { this->password = password; }

    bool getLockStatus()
    {
        return lockstatus;   // First I get the lock status value by using getter method
    }
    void setLockStatus( bool lockstatus)   // Then I set the lock status value by using setter method. Here think of lockstatus as x
    {
        this-> lockstatus = lockstatus; // I use this pointer to refer to the current object. Here x = lockstatus.
    }

    void showInfo()
    {
        cout << "------------------------------------" << endl;
        cout << "          [Phone Info]              " << endl;
        cout << "------------------------------------" << endl;
        cout << "Owner's Name    : " << getOwner() << endl;
        cout << "Phone Number    : " << getNumber() << endl;
        cout << "Phone OS        : " << getOs() << endl;
        cout << "Balance         : " << getInitialBalance() << " taka"<< endl;
        cout << "------------------------------------" << endl;
    }

    void recharge(int amount)
    {
        initialBalance += amount;
        cout << "Recharge successful!" << endl;
        cout << "New Balance: " << initialBalance << " taka" << endl;
        cout << "------------------------------------" << endl;
    }

    void call(int timeDuration)
    {
         if (timeDuration <= 0) { // used this to Validate input. Else there will be error.
        cout << "Invalid call duration! Duration must be positive." << endl;
        return;
        }

        double callCost = 0.5;
        double totalCost = callCost * timeDuration;
        if (totalCost > initialBalance)
        {
            cout << "Insufficient balance!" << endl;
        }
        else
        {
            initialBalance -= totalCost;
            cout << "Call successful!" << endl;
            cout << "Call duration: " << timeDuration << " minutes" << endl;
            cout << "Total cost: " << totalCost << " taka "<< endl;
            cout << "New Balance: " << initialBalance << endl;
            cout << "------------------------------------" << endl;
        }
    }
};

int main()
{
    string owner, number, os;
    double initialBalance;
    int password, passwordInput, amount, timeDuration, attemps = 3;

    cout << "===============================================" << endl;
    cout << "       Welcome to Mobile Management System     " << endl;
    cout << "===============================================" << endl;
    cout << "\nSetting up your new phone..." << endl;
    cout << "\n------------------------------------" << endl;
    cout << "Enter owner's name    : ";
    getline(cin, owner); // I used getline() function to get the whole line of input. Also I used cin to get the input from the user.
    cout << "Enter phone number    : ";
    cin >> number;
    cout << "Enter phone OS        : ";
    cin >> os;
    cout << "Enter Initial Balance : ";
    cin >> initialBalance;
    cout << "Set a Numeric Password: ";
    cin >> password;
    cout << endl;
    cout << "------------------------------------" << endl;
    cout << "\nPhone setup complete!" << endl;

    Mobile mobile(owner, number, os, initialBalance,password);

    if (mobile.getLockStatus())   // Here I get the lock status value by using getter method . also didn't use ay arguments in () because I don't need to pass any arguments. Or there will be an error.
    {
        cout << "Phone is locked!" << endl;
    }

    while (mobile.getLockStatus() && attemps > 0)
    {
        cout << "------------------------------------" << endl;
        cout << "          [Unlock Phone]            " << endl;
        cout << "------------------------------------" << endl;
        cout << "Enter your password to unlock the phone: ";
        cin >> passwordInput;
        if ( passwordInput == mobile.getPassword() )
        {
            mobile.setLockStatus(false); // Set the lock status value to false to unlock the phone.
            cout << "Phone unlocked successfully!" << endl;
            break;
        }
        else
        {
            attemps--;
            cout << "Invalid password! Remaining attemps: " << attemps << endl;
            if (attemps == 0)
            {
                cout << "Too many failed attempts. Exiting system!" << endl;
                return 0;
            }
        }
    }

    mobile.showInfo();
    cout << "------------------------------------" << endl;
    cout << "          [Recharge Phone]          " << endl;
    cout << "------------------------------------" << endl;
    cout << "Enter recharge amount: ";
    cin >> amount;
    mobile.recharge(amount);
    cout << "------------------------------------" << endl;
    cout << "          [Calling ]                " << endl;
    cout << "------------------------------------" << endl;
    cout << "Enter call duration in minutes: ";
    cin >> timeDuration;
    mobile.call(timeDuration);
    mobile.setLockStatus(true); // by doing this, it locks the phone at the end.
    cout << "Phone is locked!" << endl;
    return 0;
}
