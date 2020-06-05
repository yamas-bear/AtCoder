#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int a,b,res;

    cin >> a >> b;

    res = a*b;

    if(res%2 == 0){
        cout << "Even" << endl;
    }
    else{
        cout << "Odd" << endl;
    }
}