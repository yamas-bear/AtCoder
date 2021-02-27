#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int,int>;
#define rep(i,n) for (int i=0;i<(n);i++)

int main()
{
    int k,takahashi_point,aoki_point;
    map<int,int> cnt_takahashi,cnt_aoki;
    cin >> k;
    string s,t;
    cin >> s >> t;
    rep(i,4){
    //   cout << stoi(t.substr(i,1)) << endl;
      try{
      cnt_takahashi[stoi(s.substr(i,1))]+=1;
      cnt_aoki[stoi(t.substr(i,1))]+=1;
      }
      catch(invalid_argument& e){
          cout << "error" << endl;
      }
      catch(out_of_range& e){
          cout << "outofrange" << endl;
      }
    }
    takahashi_point = 1*pow(10,cnt_takahashi[1]) + 2*pow(10,cnt_takahashi[2]) +3*pow(10,cnt_takahashi[3]) +4*pow(10,cnt_takahashi[4]) +5*pow(10,cnt_takahashi[5]) + 6*pow(10,cnt_takahashi[6]) +7*pow(10,cnt_takahashi[7]) +8*pow(10,cnt_takahashi[8]) +9*pow(10,cnt_takahashi[9]);
    aoki_point = 1*pow(10,cnt_aoki[1]) + 2*pow(10,cnt_aoki[2]) +3*pow(10,cnt_aoki[3]) +4*pow(10,cnt_aoki[4]) +5*pow(10,cnt_aoki[5]) + 6*pow(10,cnt_aoki[6]) +7*pow(10,cnt_aoki[7]) +8*pow(10,cnt_aoki[8]) +9*pow(10,cnt_aoki[9]);
    cout << takahashi_point-aoki_point << endl;
	return 0;
}