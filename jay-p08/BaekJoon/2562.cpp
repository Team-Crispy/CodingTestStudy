#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>

using namespace std;

int main()
{
    cin.tie( NULL );
    ios::sync_with_stdio( false );

    int A;
    vector<int> Vector;

    for ( size_t i = 0 ; i < 9 ; i++ )
    {
        cin >> A;

        Vector.push_back( A );
    } // for()

    cout << *max_element( Vector.begin(), Vector.end() ) << "\n"
         << max_element( Vector.begin(), Vector.end() ) - Vector.begin() + 1;

    return 0;
} // main()