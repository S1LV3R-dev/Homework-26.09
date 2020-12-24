#include <bits/stdc++.h>

using namespace std;

void snakeArray(vector<vector<int>> g, int n){
  for (int line = 0;line < g.size();line += 2)
    reverse(g[line].begin(), g[line].end());
  int curline = 0;
  int k = (int)log10(n * n) + 2;
  int zr = (int)log10(n * n) + 1;
  while ((int)g[g.size() - 1].size() != 0){
    for (int i = 0;i < n;++i){
      if(g[curline + i].back() >= 10)
        cout << setw(k) << g[curline + i].back();
      else
        cout << setw(zr) << 0 << g[curline + i].back();
      g[curline + i].erase(--g[curline + i].end());
    }
    cout << "\n";
    curline++;
  }
}

signed main (){
  int n;
  cout << "print n: ";
  cin >> n;
  vector<vector<int>> g;
  int cnt = 1;
  for (int line = 1;line <= n;++line){
    vector<int> curln;
    for (int i = 1;i <= line;++i)
      curln.push_back(cnt++);
    g.push_back(curln);
  }
  for (int line = n - 1;line >= 1;--line){
    vector<int> curln;
    for (int i = 1;i <= line;++i)
      curln.push_back(cnt++);
    g.push_back(curln);
  }
  snakeArray(g,n);
  return 0;
}
