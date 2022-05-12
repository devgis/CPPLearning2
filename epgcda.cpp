#include <iostream>
#include <stdlib.h>
using namespace std;

//最大公约数
int main()
{
    int n1, n2;
 
    cout << "输入两个整数: ";
    cin >> n1 >> n2;
    
    while(n1 != n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
 
    cout << "HCF = " << n1;
    return 0;
}