#include <bits/stdc++.h>
using namespace std;

// 1118 のような、3 つ以上の同じ数字が連続して並んだ
//4 桁の整数を 良い整数 とします。
// 1000≦N≦9999

int main() {
    int value = -1;
    cin >> value   ;
    if ( 1000 > value || value > 9999 ) {
        cout << "error" << endl;
        return 0;
    }
    // std::to_string()関数を使って、int型をstring型に変換
    std::string str = std::to_string(value);
    // std::vector<std::string>を定義
    std::vector<std::string> words;

    // 各文字をstd::stringとして取得し、std::vector<std::string>に格納
    for (char c : str) {
        words.push_back(std::string(1, c));
    }

    // value outstream
    for (auto o : words){
        cout << o << endl;
    }



    // std::vector<std::string>を表示
    //for (const auto& word : words) {
    //  std::cout << word << std::endl;
    //}
    if (words[1] == words[2]){
        if (words[2] == words[3]){
            cout << "Yes" << endl;
        }

    }else if (words[2] == words[3]){
        if (words[3] == words[4]){
            cout << "Yes" << endl;
        }
    }else{
        cout << "No" << endl;
    }
    return 0;
}
