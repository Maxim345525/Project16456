#include<iostream>
using namespace std;
int main()
{
    int sum = 0;
    int n = 1000;  
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    double average = static_cast<double>(sum) / n;
    cout << "Arithmetic average of numbers from 1 to 1000: " << average << endl;
    return 0;
}