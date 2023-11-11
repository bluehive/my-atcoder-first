#include <bits/stdc++.h>

using namespace std;
//using i64 = long long;

int main() {
    //    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a ;
    cin >> a ;

    cout << count(a.begin() , a.end() , '1') << endl;
    return 0;

}
