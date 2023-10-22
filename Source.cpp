#include<iostream>
using namespace std;
int main()
{
    int a;
    cout << "Input a: ";
    cin >> a;

    if (a < 1 || a > 500) {
        cout << "a must be between 1 and 500." << endl;
        return 1; 
    }

    int sum = 0;
    for (int i = a; i <= 500; i++) {
        sum += i;
    }

    cout << "Summa " << a << " to 500: " << sum << endl;
    return 0;
}