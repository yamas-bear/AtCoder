#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int count=0;
  string a;

  cin >> a;

  for(int i=0;i<3;i++){
      if(a.at(i) == '1'){ //.at(i)でi番目の要素
          count += 1;
  }
  }

  cout << count << endl;
  
  return 0;

}