// 71 A

#include <iostream>
using namespace std;

int main()
{// narko iibwe23fsf sell!!
    int t;
    cin >> t;
    while (t-- > 0) {
        string s;
        cin >> s;
        if ( s.size() > 10 ) {
            cout << s[0] << s.size() - 2 << s[s.size() - 1] << "\n";
        } else {
            cout << s << "\n";
        }
    }
    return 0;
}