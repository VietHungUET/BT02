#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int cach = n-1;
    int sao = 1;

    for( int i = 0; i < n; ++i )
    {
        for(int j = cach; j >= 1; --j )
        {
            cout << " ";
        }
        --cach;

        for(int k = 1; k <= sao; ++k )
        {
            cout << "*";
        }
        sao += 2;

        cout << endl;
    }
}
