#include <iostream>
using namespace std;

int main()
{
    int footToInch = 12;  // 1 foot = 12 inches 
     
    int inch = 0;
    cin >> inch;
     
    cout << inch / footToInch << ',' << inch % footToInch;  // inch to foot
    
    return 0;
}

