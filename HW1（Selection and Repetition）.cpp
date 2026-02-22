#include <iostream>
#include <cstdio>  
using namespace std;

//HW1-1
//Problem1(cin直接輸入檔案)
/*int main()
{
    freopen("5.in", "r", stdin); //File Re-open（重新開啟檔案串流），它的作用是拔掉水管，接到別的地方去。
    //"1.in" (檔名)：告訴程式只要看這個檔案。
    //"r" (模式)：代表 read（唯讀）。
    //stdin (目標水管)：這是最關鍵的。它把原本接在「鍵盤」上的 stdin 水管拔掉，強行接到 1.in 這個檔案上。
    int feet, inch, input;
    cin >> input;

    inch=input%12;
    foot=input/12;
    cout << "\n" << feet << "," << inch;
return 0;
}*/

//Problem1(一般cin版)
/*int main()
{
    int feet, inch, input; //feet代表英呎，inch代表英吋，input代表輸入資料
    cin >> input;

    inch=input%12;        //input除12取餘數就是剩下的inch
    feet=input/12;        //input除12取商就是英吋
    cout << feet << " " << inch;
return 0;
}*/

//Problem2
/*int main()
{
    int feet, inch, type, data;         //type用來判斷英呎或英吋，data輸入資料
    cin >> type >> data;
    if(type == 0)                      //type是0代表輸入是英吋
    {
        inch=data%12;
        feet=data/12;
        cout << feet << "," << inch;
    }
    else                               //type是1代表輸入是英呎
    {    
        inch=data*12;
        cout << inch;
    }
return 0;
}*/

//Problem3
/*int main()
{
    int n;                                          //這個是宣告決定有幾筆資料輸入
    int feet, inch;                                 //宣告計算完的英呎、英吋存的變數
    cin >> n; 
    int *arr = new int[n];                          //動態宣告一個整數陣列，存放0/1，0代表輸入的是英吋，1代表輸入的是英呎
    int *arr1 = new int[n];                         //這邊是存放第二行資料，英寸或英尺的大小
    
    for(int i=0; i<n ; i++)                         //把n筆資料輸入進兩個n大小的array
    {
        cin >> arr[i] >> arr1[i];
    }

    for(int i=0; i<n ; i++)                         //跑n次把計算完的資料印出
    {
        if(arr[i]==0)                               //判斷arr陣列中的值如果是0則輸入的資料是英吋
        {                                           
            feet=arr1[i]/12;                        //換算arr1中第i個資料有幾英尺
            inch=arr1[i]%12;                        //換算arr1中第個資料有幾英寸
            cout << feet << "," << inch << "\n";
        }
        else                                       //arr[i]中的資料如果是1就代表輸入的是英呎
        {
            inch=arr1[i]*12;                       //換算arr1中第i個資料的英呎轉換成英寸
            cout << inch << "\n";
        }
    }
    delete[] arr;                                  //釋放宣告的動態arr,arr1
    delete[] arr1;                                 //一定要釋放，可以說跟int *arr = new int[n]是綁一起的
return 0;
}*/

//HW1-2
//Problem2: base conversion
/*int main()
{
    int val=0, base, quo=0, rem=0;          //val是
    cout << "Input:\n";
    cin >> val >> base;
   for(int i=13; i>=0 ;i--)
   {
        if(pow(base,i)>val)
            continue;
        else
        {   
            quo=val/pow(base,i);
            cout << "Output:\n" << quo;
            return 0;
        }
   }
return 0; 
}*/

//Problem6:time files
/*int main()
{
    // hour,mins,sec輸入的時分秒，data增加的秒數，newHour, newMins, newSec更新過的時分秒
    int hour, mins, sec, data, newHour, newMins, newSec ; 
    cout << "Input:" << "\n";
    cin >> hour >> mins >> sec >> data;
    
    //新秒數計算方法
    newSec=data%60+sec;
    //如果新秒數超過60，新的分鐘要加1
    if(newSec>=60)
    {
        newSec=newSec%60;  // 新的秒數超過60要再除60一次
        newMins=(data/60)%60+mins+1;  //新分數計算，+1因為秒數的進位，以此類推
        if(newMins>=60)   
        {
            newMins=newMins%60;
            newHour=(data/60)/60%60+hour+1;
        }
        else
        {
            newHour=(data/60)/60%60+hour;
        }
    }
    //新的秒數不超過60
    else
    {
        newMins=(data/60)%60+mins;   //新的分數就不用加一，以此類推
        if(newMins>=60)   
        {
            newMins=newMins%60;
            newHour=(data/60)/60%60+hour+1;
        }
        else
        {
            newHour=(data/60)/60%60+hour;
        }
        
    }
    cout << "Output:\n" << newHour << ":" << newMins << ":" << newSec << "\n";
    return 0;
}*/

//Problem 7
//是4的倍數且不是100的倍數，或是400的倍數就是閏年
/*int main()
{
    //data是污辱的西元年
    int data;
    cout << "Inout:\n";
    cin >> data;
    cout << "Output:\n";

    //如果是4的倍數且不是100的倍數  或   是400的倍數，則輸出1
    if(((data%4==0) && (data%100!=0)) || (data%400==0))
        cout << "1\n";
    //不是則輸出0
    else
        cout << "0\n";
return 0;
}*/