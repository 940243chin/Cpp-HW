#include <iostream>
using namespace std;
int main()
{
    int playerCount = 0, heightLimitInFoot = 0;
    cin >> playerCount >> heightLimitInFoot;
    int heightLimitInInch = heightLimitInFoot * 12;
    int playerEqualOrAboveLimit = 0;

    for (int i = 0; i < playerCount; i++)
    {
        int heightInInch = 0;
        cin >> heightInInch;
        if (heightInInch >= heightLimitInInch)
        {
            playerEqualOrAboveLimit++;
        }
    }
    cout << playerEqualOrAboveLimit;
    return 0;
}