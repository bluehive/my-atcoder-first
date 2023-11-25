#include <bits/stdc++.h> //#include "sub_1.h" // string spring1;//#include "sub_2.h" // string summer1 ;

using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n) ; i++)

int fibo(int i){
    if (i == 0){
        return  1 ;
    }else if(i == 1){
        return 1 ;
    }else {
        return fibo(i - 1) + fibo(i - 2) ;
    }
}

int main(){
    long int N ;
    N = 12089000 ;// cin >> N;
    std::vector<int> v1(9,0) ;
    auto mydump = [](auto x){ cout << x << endl;};
    assert ( 0 < N) ;  assert (N <= pow(10, 8) ); //　&& "Error assert !!" );
    int  temp = N ;
    rep(i, N * 10){
        v1[i] = N % 10;
        N /= 10;
    }

    int num = 0;
    for(const auto& i : v1){
        num += i ;
    }
    //mydump(num) ;
    temp % num == 0 ? mydump("Yes") : mydump("No");
    mydump(fibo(22));
    return 0;
}
