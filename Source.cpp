#include<iostream>
using namespace std;
int main()
{
	int x;
	cout << "Input x->";
	cin >> x;
	int y;
	cout << "Input y->";
	cin >> y;
	double result = pow(x, y);
	cout << result << endl;
}