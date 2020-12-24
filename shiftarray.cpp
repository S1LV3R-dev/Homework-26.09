#include <bits/stdc++.h>

using namespace std;

void shiftArray(int v[], int n, int k) {
  int el[n+1], bl[n+1];
  for (int i = 0; i < k; i++)
    el[i] = v[i];
  for (int i = k,x=0; i < n; i++,x++){
    bl[x] = v[i];
  }
  for (int i = 0; i < n-k; i++){
    cout << bl[i]<<' ';
  }
  for (int i = 0; i < k; i++){
    cout << el[i]<<" ";
  }
}

signed main(){
  int n, k;
  n = 10;
  k = 3;
  int v[9999];
  for (int i = 0;i < n;++i)
    v[i] = i;
  shiftArray(v, n, k);
  return 0;
}
