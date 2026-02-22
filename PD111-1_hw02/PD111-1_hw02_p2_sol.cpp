#include <iostream>
using namespace std;
int main()
{
    int guardID = 1, forwardID = 2, centerID = 3;
    int playerCount, heightLimitInFoot = 0;
    cin >> playerCount >> heightLimitInFoot;
    
    int heightLimitInInch = heightLimitInFoot * 12;
    int guardEqualOrAboveLimitCount = 0, forwardEqualOrAboveLimitCount = 0, centerEqualOrAboveLimitCount = 0;

    for (int i = 0; i < playerCount; i++)
    {
        int playerID = 0, heightInInch = 0;
        cin >> heightInInch >> playerID;
        if (heightInInch >= heightLimitInInch)
        {
            if (playerID == guardID)
            {
                guardEqualOrAboveLimitCount++;
            }
            else if (playerID == forwardID)
            {
                forwardEqualOrAboveLimitCount++;
            }
            else if (playerID == centerID)
            {
                centerEqualOrAboveLimitCount++;
            }
        }
    }
    cout << guardEqualOrAboveLimitCount << "," << forwardEqualOrAboveLimitCount << "," << centerEqualOrAboveLimitCount;
}