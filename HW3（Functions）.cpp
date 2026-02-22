#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

// pronblem1
/*int min(int a, int b);
int main()
{
    int a , b;
    cin >> a >> b;
    int c=min(a, b);
    cout << c << "\n";

return 0;

}
int min(int a, int b)
{
    if(a > b)
        return b;
    else return a;
}*/

// Problem2
/*int gcd(int a, int b);

int main()
{
    int a, b;
    cin >> a >>b;
    int c=gcd(a, b);
    cout << c << "\n";
return 0;
}

int gcd(int a, int b)
{
    if(b==0) return a;
    return gcd(b, a%b);
}*/

// Problem3
/*int gcd(int a , int b , int c)
{
    int d=std::gcd(a, b);
    return std::gcd(d, c);
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int d=gcd(a, b, c);
    cout << d << "\n";
return 0;
}*/

/*int gcd(int a, int b) {
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

int gcd(int a, int b, int c) { return gcd(gcd(a, b), c); }

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  cout << gcd(a, b, c) << "\n";
  return 0;
}*/

// Problem4

// gradeCnt是陣列長度，threshold是門檻，grades是陣列，用&是call by
// reference(現在這個grades[]是vector<int>
// v的分身，所以如果改到grades[]，v也會跟著改，分身就是除了名字不一樣，其他都一樣)
/*int highGradeCnt(int gradeCnt, int threshold, vector<int> &grades) {
//count是用來計幾個過門檻(>=threshold)的，大於就＋＋，回傳count
int count = 0;
  for (int i = 0; i < gradeCnt; i++) {
    if (grades[i] >= threshold) {
      count++;
    }
  }
  return count;
}

int main() {
  int gradeCnt, threshold;
  cin >> gradeCnt >> threshold;
  vector<int> v(gradeCnt);
  for (int i = 0; i < gradeCnt; i++) {
    cin >> v[i];
  }
  cout << highGradeCnt(gradeCnt, threshold, v) << "\n";
  return 0;
}*/

// Problem5
// threshold是門檻，assigmentCnt是作業數，gradeCnt是學生數，grades是二維陣列
/*int mostheighGrades(int threshold, int assigmentCnt, int gradeCnt, int
grades[][50]) {
  //count是用來計幾個過門檻(>=threshold)的，大於就＋＋，回傳count，max是用來記錄最大的count，maxindex是用來記錄最大的count對應的index
  int count = 0, max = 0, maxindex = 0;
  for (int i = 0; i < assigmentCnt; i++) {
    for (int j = 0; j < gradeCnt; j++) {
      if (grades[i][j] >= threshold) {
        count++;
      }
    }
    if (count > max) {
      max = count;
      maxindex = i + 1;
    }
    count = 0;
  }
  return maxindex;
}

int main() {
  int m, n, threshold;
  cin >> m >> n >> threshold;
  //因為傳二維陣列當argument時，必須指定第二維的長度，所以要先定義一個二維陣列，因為題目說m<-=10,n<=50，所以就設10x50，如果沒有設n的長度，編譯器會不知道要怎麼傳
  int grades[10][50];
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> grades[i][j];
    }
  }
  cout << mostheighGrades(threshold, m, n, grades) << "\n";
  return 0;
}*/

// End