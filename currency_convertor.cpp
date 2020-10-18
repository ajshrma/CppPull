#include <iostream>
using namespace std;

int func()
{
    int n;
    const int ton_value = 100, half_value = 50, quarter_value = 25, dime_value = 10, nickle_value = 5, penny_value = 1;
    cout << "Enter the amount: ";
    cin >> n;
    int balance{}, ton{}, half{}, quarter{}, dime{}, nickle{}, penny{};

    ton = n / ton_value;
    balance = n % ton_value;
    cout << ton << endl;

    half = balance / half_value;
    balance %= half_value;
    cout << half << endl;

    quarter = balance / quarter_value;
    balance %= quarter_value;
    cout << quarter << endl;

    dime = balance / dime_value;
    balance %= dime_value;
    cout << dime << endl;

    nickle = balance / nickle_value;
    balance %= nickle_value;
    cout << nickle << endl;

    penny = balance;
    cout << penny << endl;

    return 0;
}

int main()
{
    int n;
    const int ton_value = 100, half_value = 50, quarter_value = 25, dime_value = 10, nickle_value = 5, penny_value = 1;
    cout << "Enter the amount: ";
    cin >> n;
    int balance{}, ton{}, half{}, quarter{}, dime{}, nickle{}, penny{};

    ton = n / ton_value;
    balance = n - (ton * ton_value);
    cout << ton << endl;

    half = balance / half_value;
    balance -= (half * half_value);
    cout << half << endl;

    quarter = balance / quarter_value;
    balance -= (quarter * quarter_value);
    cout << quarter << endl;

    dime = balance / dime_value;
    balance -= (dime * dime_value);
    cout << dime << endl;

    nickle = balance / nickle_value;
    balance -= (nickle * nickle_value);
    cout << nickle << endl;

    penny = balance;
    cout << penny << endl;
    func();
    return 0;
}
