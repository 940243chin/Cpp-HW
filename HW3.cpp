#include <iostream>
#include <cmath>
#include <cstdio> 
#include <iomanip>
#include <cstdlib>
#include <iomanip>
using namespace std;

//pronblem1
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

//Problem2
int gcd(int a, int b);

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
}