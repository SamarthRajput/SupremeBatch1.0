#include <iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;

int main() {
  int x, y, n;
  cin >> x >> y >> n;
  int t = n;
  vector<int> rowC;
  vector<int> colC;

  //inserting imaginary towers at 0th index bcz ques wise 0th index exists nhi karta
  rowC.push_back(0);
  colC.push_back(0);

  //input towers insert kardiye
  while(t--) {
    int a, b;
    cin >> a >> b;
    rowC.push_back(a);
    colC.push_back(b);
  }

  //size of 2D grid -> insert karna hai
  //ending row and ending column ke baad ek or imaginary tower insert kardiya
  rowC.push_back(x+1);
  colC.push_back(y+1);

  sort(rowC.begin(), rowC.end());
  sort(colC.begin(), colC.end());

  //row ke andar max difference nikal liya
  int maxLen = INT_MIN;
  for(int i=1; i<rowC.size(); i++) {
      int a = rowC[i-1];
      int b = rowC[i];

      maxLen = max(maxLen, b-a-1);
  }
  
  //column ke andar max difference nikal liya
  int maxWidth = INT_MIN;
  for(int i=1; i<colC.size(); i++) {
      int a = colC[i-1];
      int b = colC[i];

      maxWidth = max(maxWidth, b-a-1);
  }

  cout << "answer is " << maxLen * maxWidth << endl;

  return 0;
}