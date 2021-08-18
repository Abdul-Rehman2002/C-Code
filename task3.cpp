
#include<iostream>
using namespace std;
int main()
{
    int number;
    cout << " Enter a number :";
    cin >> number;
    while (number % 2 != 1)
    {
        cout << " Error !!" << endl;
        cout << " Enter an odd number :" << endl;
        cin >> number;
    }
   while (number < 3)
    {
       cout << " Error !!" << endl;
       cout << " Enter number greater than 2 " << endl;
       cin >> number;
    }
         
    for (int i = 0; i <= number; i++)
    {
        for (int j = 1; j <= number - i; j++)
            cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++)
            cout << "*";
        cout << endl;
    }
    for (int i = number - 1; i >= 1; i--)
    {
        for (int j = 1; j <= number - i; j++)
            cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++)
            cout << "*";
        cout << endl;
    }


   return 0;
}