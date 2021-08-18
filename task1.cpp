
#include<iostream>
using namespace std;
int main ()
{
int first = 0, last = 0;
cout << "Enter the starting integer :";
cin >> first;
cout << "Enter the ending integer :";
cin >> last;
for (int i = first; i <= last; i++)
{
	for (int j = first; j <= last; j++)
	{
		cout << "(" << i << "," << j << ")";
	}
	first++; last--;
	cout << endl;
}
return 0;
}