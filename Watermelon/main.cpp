#include <iostream>

using namespace std;
int main()
{
    unsigned short w;
    cin >> w;
    if(w%2 == 0 && w > 2)
        cout << "YES";
    else
        cout << "NO";
}