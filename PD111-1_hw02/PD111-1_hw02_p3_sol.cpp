#include <iostream>
using namespace std;

int main()
{
    int guardID = 1, forwardID = 2, centerID = 3;
    int playerCount, heightLimitInFoot = 0;
    int maxGuardHeightInInch = 0, maxForwardHeightInInch = 0, maxCenterHeightInInch = 0;
    int heighestGuardID = 0, heighestForwardID = 0, heighestCenterID = 0;

    cin >> playerCount >> heightLimitInFoot;
    int heightLimitInInch = heightLimitInFoot * 12;

    for (int playerID = 1; playerID <= playerCount; playerID++)
    {
        int positionID = 0, heightInInch = 0;
        cin >> heightInInch >> positionID;

        if (positionID == guardID)
        {
            if (heightInInch > maxGuardHeightInInch)
            {
                maxGuardHeightInInch = heightInInch;
                heighestGuardID = playerID;
            }
        }
        else if (positionID == forwardID)
        {
            if (heightInInch > maxForwardHeightInInch)
            {
                maxForwardHeightInInch = heightInInch;
                heighestForwardID = playerID;
            }
        }
        else if (positionID == centerID)
        {
            if (heightInInch > maxCenterHeightInInch)
            {
                maxCenterHeightInInch = heightInInch;
                heighestCenterID = playerID;
            }
        }
    }
    cout << heighestGuardID << "," << heighestForwardID << "," << heighestCenterID;
}