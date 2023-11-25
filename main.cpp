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

/* x = 1
 * A func : x *= 2
   B func : x += K
   cin >> N , K
   1 <= N K <= 10 , int
   rep i,N {
     if A > B   Bfunc
     else if A < B  Afunc...
     else ...
   }
   コレクションは　ベクトルか
   再帰はないか

*/

int main(){
    int N, K ;
    int init = 1;
    cin >> N >> K;
    auto mydmp = [](auto x){ cout << x << endl;};
    assert ( 0 < N && N <= pow(10, 1) );    assert ( 0 < K && K <= pow(10, 1) );
    auto Afunc = [](auto x){     return x *= 2 ;    };
    auto Bfunc = [](auto x,auto y){     return x +=  y ;    };
    auto refunc = [](int i , auto A, auto B){
        if (i == 0){
            return 1 ;
        }else{
            if (A > B){
                return refunc(i - 1 ,B ,A)
            }else{
                return refunc(i - 1 ,A,B)
            }
        }
    };
    //
    mydump(refunc(N,Afunc(init),Bfunc(init,K)));
    return 0;
}
