#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int,int>;
#define rep(i,n) for (int i=0;i<(n);i++)

int main()
{
    string n;
    cin >> n;
    // cout << n.substr(n.length()-1,1) << endl;
    if(n.substr(n.length()-1,1)=="3"){
        cout << "bon" << endl;
    }else if(n.substr(n.length()-1,1)=="0" || n.substr(n.length()-1,1)=="1" || n.substr(n.length()-1,1)=="6" || n.substr(n.length()-1,1)=="8"){
        cout << "pon" << endl;
    }else{
        cout << "hon" << endl;
    }
    
	return 0;
}
