#include <iostream>

using namespace std;

int main() {
    string wtd = "Nothing";
    int amount = 0;
    int Balance = 15000;
    cout << "Welcome To The Banky Bank";
    cout << "Would You Like To Make A Withdrawl? ";
    cin >> wtd;
    if (wtd == "yes") {
        cout << "How Much Would You Like To Withdrwl? ";
        cin >> amount;
        Balance = (Balance - amount);
        cout << "Successfully Withdrawled"; 
    } else {
        cout << "Transaction Failed";
    }
    return 0;
}