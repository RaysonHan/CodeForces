//268917426	Jul/05/2024 18:56UTC+8	rayson	4A - Watermelon	C++17 (GCC 7-32)	Accepted	92 ms	0 KB
#include <iostream>

using namespace std;

int main()
{
    int w;
    cin >> w;
    if (w % 2 == 0 && w > 2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
