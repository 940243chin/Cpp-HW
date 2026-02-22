#include <iostream>
using namespace std;

int main()
{
    int footToInch = 12;  // 1 foot = 12 inches
    
    int isFoot = 0, length = 0;  // the unit of length may be foot or inch
    cin >> isFoot >> length;
    
    if(isFoot == 1)
        cout << length * footToInch;                                // foot to inch
    if(isFoot == 0)
        cout << length / footToInch << ',' << length % footToInch;  // inch to foot
    
    return 0;
}

