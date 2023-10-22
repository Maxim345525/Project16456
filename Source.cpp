#include<iostream>
using namespace std;
int main()
{
	int a;
	cout << "Input a->";
	cin >> a;
	int dobytok = 0;
	for (int i = a; i <= 20; i++) {
		dobytok += i;
	}
	cout << dobytok << endl;
}