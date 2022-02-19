#include<iostream>
const int m = 1000;
void swap(int& a, int& b)
{
	int c = a;
	a = b;
	b = c;
}
using namespace std;
int main()
{
	int a[m];
	int c, u, l, r;
	cout << "Enter size: ";
	cin >> c;
	for (int i = 0; i < c; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < c; i++)
	{
		cout << i << "is" << a[i] << "   ";
	}
	cout << "Please Enter upper bound, lower bound bound & rotate: ";
	cin >> u >> l >> r;
	for (int i = 1; i <= u; i++)
	{
		if (i + r > u)
		{
			continue;
		}
		swap(a[i], a[i + r]);
	}
	for (int i = 0; i < c; i++)
	{
		cout << i << "is" << a[i] << "  ";
	}
}