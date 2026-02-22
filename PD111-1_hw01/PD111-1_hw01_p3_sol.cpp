#include <iostream>
using namespace std;

int main()
{
    int footToInch = 12;  // 1 foot = 12 inches
    
    int taskCnt = 0;       // number of tasks need to do
    int taskComplete = 0;  // number of tasks completed
    
    cin >> taskCnt;
    
    while(taskComplete < taskCnt)
    {
        int isFoot = 0, length = 0;  // the unit of length may be foot or inch
        cin >> isFoot >> length;
        
        if(isFoot == 1)
            cout << length * footToInch << '\n';                                // foot to inch
        if(isFoot == 0)
            cout << length / footToInch << ',' << length % footToInch << '\n';  // inch to foot
        
        taskComplete = taskComplete + 1;  // one more task is completed
    }
    
    return 0;
}

