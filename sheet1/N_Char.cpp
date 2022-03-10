#include <iostream>
using namespace std;

int main()
{

    char a;
    cin >> a;
    if (int(a) >=65 && int(a)<97)
    {
        a=int(a)+32;
        cout << a << endl;
    
    }
    else
    {
        a=int(a)-32;
        cout << a;
    }

    return 0;
}