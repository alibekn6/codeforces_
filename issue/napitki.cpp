// 200 B btw

#include <iostream>
using namespace std;
int main()
{
    // n - напиток
    float res;
    int n;
    cin >> n;
    int nums;
    for (int i = 0; i < n; i++) {
        cin >> nums;
        res += nums;
    }
 
    cout << res / n;
}