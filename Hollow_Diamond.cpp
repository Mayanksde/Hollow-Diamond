#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows : " << endl;
    cin >> n;
    cout << endl
         << endl;
         // First half
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row; col++)
        {
            cout << "* ";
        }
        for(int col =0; col< 2*row +1 ;col++)
        {          
            cout<<"  ";
        }
        for (int col = 0; col < n-row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

         // Second half
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col <=row; col++)
        {
            cout << "* ";
        }
        for(int col =0; col< n-row ;col++)
        {
            cout<<"  ";
        }
        for (int col = 0; col < n-row-1; col++)
        {
            cout << "  ";
        }
        for (int col = 0; col <=row; col++)
        {
            cout << "* ";
        }

        cout << endl;
    }
    return 0;
}