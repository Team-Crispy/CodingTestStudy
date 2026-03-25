#include <iostream>

using namespace std;

int main()
{
    int H, M;
    cin >> H >> M;

    if( M < 45 )
    {
        M += 60;
        if( H - 1 < 0 )
        {
            H = 24;
        } // if()
        
        H -= 1;
    } // if()

    cout << H << " " << M - 45  << endl;

    return 0;
} // main()