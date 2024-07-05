//268926311	Jul/05/2024 20:08UTC+8	rayson	71A - Way Too Long Words	C++17 (GCC 7-32)	Accepted	61 ms	0 KB
#include <iostream>

using namespace std;

int main(){
  int n;
  string s;
  cin >> n;
  while(n--)
  {
    cin >> s;
    if(s.length() > 10)
    {
      cout << s[0] << s.length() - 2 << s[s.length() - 1] << endl;
    }
    else
    {
      cout << s << endl;
    }
  }
  return 0;
}
