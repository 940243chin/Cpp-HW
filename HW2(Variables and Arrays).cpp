#include <iostream>
#include <cmath>
#include <cstdio> 
#include <iomanip>
#include <cstdlib>
#include <iomanip>
using namespace std;

//HW2-1
//Problem1(HW)
/*int main()
{
    int n, t, num=0;
    cin >> n >> t;

    //宣告一個動態陣列
    int *arr = new int[n];

    //一序input data進array 並且一遍邊判斷是否
    for(int i=0 ; i<n ; i++)
    {
        cin >> arr[i];
        if(arr[i] >= (t*12))
            num++;
    }
    cout << num << "\n";
    delete[] arr;
return 0;
}*/

//Problem2
/*int main()
{
    int n, t, num1=0, num2=0, num3=0;
    cin >> n >> t;
    int *arr = new int[n];
    int *arr1 = new int[n];
    for(int i=0 ; i<n ; i++)
    {
        cin >> arr[i] >> arr1[i];
        switch (arr1[i])
        {
        case 1:
            if(arr[i]>=(t*12))
                num1++;
            break;
        case 2:
            if(arr[i]>=(t*12))
                num2++;
            break;
        case 3:
            if(arr[i]>=(t*12))
                num3++;
            break;
        default:
            break;
        }
    }
    delete[] arr;
    delete[] arr1;
    cout << num1 << "," << num2 << "," << num3 << "\n";
    
}*/

//Problem3
/*int main()
{
    //hum:人數，t:身高限制(這邊用不到但題目說留著)，g,f,c分別存最高的號碼
    int hum=0, t=0, g=0, f=0, c=0;
    //暫存最高身高跟後續的比大小
    int bigG=0, bigF=0, bigC=0;
    cin >> hum >> t;
    //宣告兩個動態陣列arr存身高，arr2存分類
    int *arr = new int[hum];
    int *arr2 = new int[hum];
    //用switch分別找不同位置中最高的人
    for(int i=1 ; i<=hum ; i++)
    {
        cin >> arr[i] >> arr2[i];
        switch (arr2[i])
        {
        case 1:
            if(arr[i]>bigG)
            {
                bigG=arr[i];
                g=i;
            }
            break;
        case 2:
            if(arr[i]>bigF)
            {
                bigF=arr[i];
                f=i;
            }
            break;
        case 3:
            if(arr[i]>bigC)
            {   
                bigC=arr[i];
                c=i;
            }
            break;
        default:
            break;
        }
    }
    cout << g << "," << f << "," << c << "\n";
    //Release陣列空間
    delete[] arr;
    delete[] arr2;
return 0; 

}*/

//Problem1(上課)
/*int main()
{
    float a=0.1, b=0.2;
    //setprecision(10):會控制輸出幾位有效位數
    cout <<setprecision(10)<< a+b ;
return 0;
}*/

//Problem2
/*int main()
{
    int items, maximum=0, valueSum=0, backpack=0;
    cin >> items >> maximum;
    int *arr = new int[items];
    int *arr1 = new int[items];
    int *arr2 = new int[items];
    for(int i=0;i<items;i++)
    {
       cin >> arr[i];
    }
    for(int i=0;i<items;i++)
    {
        cin >> arr1[i];
    }
    for(int i=0;i<items;i++)
    {
        cin >> arr2[i];
    }
    for(int i=0; i<items;i++)
    {
        if(arr2[i]==1)
        {
            if(backpack + arr[i] > maximum)
            {
                cout << "0\n";
                delete[] arr; delete[] arr1; delete[] arr2;
                return 0;
            }
            backpack+=arr[i];
            valueSum+=arr1[i];
        }
    }
    cout << backpack << " " << valueSum << "\n";
    delete[] arr;
    delete[] arr1;
    delete[] arr2;
return 0;
}*/

/*1) C-style 陣列（你用的 new int[n]）是手動管理
特性

大小固定（建立後不能變）

你要自己 delete[]

容易出錯（忘記 delete、delete 錯、越界、例外提前 return 導致 leak）

你程式中的風險

你雖然有 delete[]，但如果中途很多地方 return，就要自己確保每條路徑都 delete（很容易漏）。
（你剛剛的程式就有早退 return 0;，所以你要記得在那之前也 delete。）

2) std::vector<int> 是自動管理（RAII）
特性

自動配置/釋放記憶體（離開作用域自動清掉）

可以動態變大：push_back

提供很多功能：size(), empty(), at()（可做界限檢查）

一樣是連續記憶體，效能通常跟陣列非常接近

3) 效能差嗎？

通常幾乎沒差（甚至很多時候 vector 更好用也不慢）：

vector 內部就是一塊連續的 heap 記憶體（跟 new[] 類似）

存取 v[i] 跟陣列 arr[i] 都是 O(1)

真正差別多出現在：

push_back 擴容時會重新配置並搬移資料（但平均攤提 still O(1)）

你如果一開始就 vector<int> v(n);，那就跟固定大小陣列很像，不會一直擴容。

4) 什麼時候用哪個？
幾乎都用 vector

競賽、作業、一般專案：vector 是首選

少 bug、可讀性好、早退/例外都不怕 memory leak

什麼時候才用 raw array / new？

你在寫底層 library、或非常極限的效能/記憶體管理、或要跟 C API 介接

或你明確要放在 stack：int a[100];（固定編譯期大小）

*/

//Problem3(用vector版)
/*int main()
{
    int n=0, b=0, totalWeight=0, totalValue=0;
    cin >> n >> b;
    vector<int> w(n), v(n);
    for(int i=0;i<n;i++)
    {
       cin >> w[i];
    }
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        if(x==1)
        {
            totalWeight+=w[i];
            totalValue+=v[i];
        }
    }
    if(totalWeight>b)
    {
        cout << 0 << "\n";
    }
    else cout << totalWeight << " " << totalValue << "\n";
return 0;
}*/

//Porblem3
/*int main()
{
    int n=0, m=0;
    cin >> n >> m;
    vector<int> p(m);
    vector<int> a(m+1);
    for(int i=1; i<=m ; i++)
    {
        cin >> p[i];
    }
    for(int i=n+1; i<=m+1; i++)
    {
        for(int j=1; j<=3; j++)
        {
            a[i]+=p[i-j];
        }
        a[i]=a[i]/n;
        cout << a[i] << ",";
    }
return 0;
}*/

//Problem4
/*int main()
{
    int n=2, N=0, item=0, minN=0;
    float  mae=0.0,tmae=numeric_limits<double>::max(), min=0.0;
    cin >> N >> item;
    vector<int> s(item+1);
    vector<float> f(item+1), m(item+1);
    for(int i=1; i<=item; i++)
    {
        cin >> s[i];
    }
    int x=n+1, y=item;
    for(int t=2 ; t<=N ; t++)
    {
        for(int i=t+1 ; i<=y ; i++)
        {   
            f[i]=0.0f;
            for(int j=t ; j>=1 ; j--)
            {
                f[i]+=s[i-j];
            }
            f[i]=f[i]/t;
            f[i]=std::round(f[i] * 100.0) / 100.0;
            m[i]=fabs(f[i]-s[i]);
            //cout << m[i] << " ";  把每個n的Error印出來確認有沒有錯
            mae+=m[i];
         }
        mae=mae/(item-t);
        //cout << mae << " ";      //把每個n的MAE印出來
        if(mae <= tmae) 
        {
            tmae=mae;
            minN=t;
        }
        mae=0.0;
    }
    cout << "\n";
    cout << minN << " " << setprecision(3) << tmae << "\n";
return 0;   
}*/

