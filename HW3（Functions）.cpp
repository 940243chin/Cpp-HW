#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

// 課堂練習
//  pronblem1
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

// Problem5(找過門檻最多的作業，如果多個作業都一樣多，回傳最小的index)
// threshold是門檻，assigmentCnt是作業數，gradeCnt是學生數，grades是二維陣列
/*int mostheighGrades(int threshold, int assigmentCnt, int gradeCnt, int
grades[][50])
{
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

// HW
// Problem1
// 函數功能：計算各位置達到身高門檻的球員人數
// 參數說明：height[]是身高，position[]是位置，numPlayer是球員總人數，heightLimit是身高門檻

/*void validateHeight(int height[], int position[], int numPlayer,
                    int heightLimit) {
  int count1 = 0, count2 = 0, count3 = 0;
  heightLimit *= 12; // 將身高門檻從英尺換算成英寸

  // 用switch
  // case判斷位置(用position當變數判斷位置)，如果身高大於等於身高門檻，就count++
  for (int i = 0; i < numPlayer; i++) {
    switch (position[i]) {
    case 1:
      if (height[i] >= heightLimit)
        count1++;
      break;
    case 2:
      if (height[i] >= heightLimit)
        count2++;
      break;
    case 3:
      if (height[i] >= heightLimit)
        count3++;
      break;
    }
  }
  cout << count1 << "," << count2 << "," << count3 << "\n";
}

int main() {
  int numPlayer, heightLimit;
  cin >> numPlayer >> heightLimit;
  int height[numPlayer], position[numPlayer];
  for (int i = 0; i < numPlayer; i++) {
    cin >> height[i]; // 先讀全部身高
  }
  for (int i = 0; i < numPlayer; i++) {
    cin >> position[i]; // 再讀全部位置
  }
  validateHeight(height, position, numPlayer, heightLimit);
  return 0;
}*/