#include <bits/stdc++.h>
#include "sub_1.h" // string spring1;
#include "sub_2.h" // string summer1 ;

using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n) ; i++)

void Main2(){}

//1≤N≤100  Si​ は P か W か G か Y
// set , lamdb

void Main() {
    int N ;  cin >> N ;
    assert( not(N < 1 || 100 < N) );
    // 正規表現を定義
    std::regex pattern_four("[PWGY]");
    regex pattern_yellow("Y");//  regex pattern_three("[PWG]");
    vector <string> v1_colors (N , "Z")  ;
    string ans = "Three" ;
    rep(i, N){
        std::cin >> v1_colors[i] ;
        // 正規表現にマッチするかチェック
        assert(std::regex_match(v1_colors[i], pattern_four));
        // printf  cout << "step:" << v1_colors[i] << endl;
        if (regex_match(v1_colors[i], pattern_yellow)){
            ans = "Four" ;
        }
    }
    cout << ans << endl;
    return ;
}

int main(){
    //
    int f1 =  [](int a, int b){ return a + b ;}( 2 ,3) ;
    cout << f1 << endl;

    //
    auto f2 = [](int a, int b) -> int { // ラムダ式の本体
        // 処理
        return a * b;
    };
    cout << f2(3, 11) << endl;
    //
    auto f3 = [](auto a){ cout << "iostream ::" << a << endl ; };
    f3("Gifu jyou"s) ;
    f3("夏休み期間"s);
    f3(1999) ;

    auto f4 =[](auto a, string b){  cout << "stream ::" << a << " is " << b << endl; };
    f4("Kyotogosyo"s , "goods");
    f4("春休み"s , "enjoy");
    f4(2100 , "feuture");
    // header
    cout << spring1 << endl ;
    cout << summer2 << endl ;
    // class
    Say s;
    s.hello();
    s.apple1();

    //  Main();
    return 0;
}
