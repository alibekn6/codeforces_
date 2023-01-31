// 41A

#include <iostream>
using namespace std;


int main()
{
    string s;
    string t;
    string temp;
    cin >> s >> t;
    int len = size(s) - 1;
    for (int i = len; i >= 0; i--) {
        temp += s[i];
    }

    string res;
    res = (temp == t) ? "YES" : "NO";
    cout << res;

}

// int main()
// {

//     string word;
//     cin >> word;
//     int len =  size(word) - 1; // code -> 6
//     for (int i = len; i >= 0; i--) {
//         cout << word[i];
//     }
// }