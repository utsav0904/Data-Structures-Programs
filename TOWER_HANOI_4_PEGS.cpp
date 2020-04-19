#include<iostream>
using namespace std;

void Hanoi4(int num, char a, char b, char c, char d)
{
    if ( num == 1 )
        cout << a << " --> " << d << endl;
    else if ( num == 2 )
    {
        cout << a << " --> " << b << endl;
        cout << a << " --> " << d << endl;
        cout << b << " --> " << d << endl;
    }
    else
    {
        Hanoi4(num - 2, a, c, d,b);
        cout << a << " --> " << c << endl;
        cout << a << " --> " << d << endl;
        cout << c << " --> " << d << endl;
        Hanoi4(num - 2, b, a, c, d);
    }
}

int main()
{
    Hanoi4(3, 'A', 'B', 'C', 'D');

    return 0;
}
