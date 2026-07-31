#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    string chars =
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz"
        "0123456789"
        "!@#$%^&*";

    int length;

    cout << "========== PASSWORD GENERATOR ==========\n";
    cout << "Enter password length: ";
    cin >> length;

    srand(time(0));

    cout << "\nGenerated Password: ";

    for (int i = 0; i < length; i++) {
        cout << chars[rand() % chars.length()];
    }

    cout << endl;

    return 0;
}