#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n) ; i++)

int main() {
    int N, A;
    cin >> N >> A;
    assert( not(N < 0 || 7 < N) );  assert(not (A < 0 || 10 < A) ) ;
    // 正規表現を定義  std::regex pattern("+|-|*|/");
    std::regex pattern("[+\\-*/]");
    std::string op; int b;
    rep(i, N){
        std::cin >> op >> b ;
        // 正規表現にマッチするかチェック
        assert(std::regex_match(op, pattern));
        // ここにプログラムを追記
        if (op == "/" && b == 0) {
            cout << "error" << endl;
            break ;
        }
        cout << i + 1 << ":" << (A = (op == "+") ? A + b : (op == "-") ? A - b : (op == "*") ? A * b : A / b) << endl ;
    }

    return 0;
}
