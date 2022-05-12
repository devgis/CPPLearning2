#include <iostream>
using namespace std;

//最小公约数
int main()
{
    int n1, n2, hcf, temp, lcm;
 
    cout << "输入两个数: ";
    cin >> n1 >> n2;
 
    hcf = n1;
    temp = n2;
    
    while(hcf != temp)
    {
        if(hcf > temp)
            hcf -= temp;
        else
            temp -= hcf;
    }
 
    lcm = (n1 * n2) / hcf;
 
    cout << "LCM = " << lcm;
    return 0;
}

//辗转相除法
int gcd(int x,int y){
    return y?gcd(y,x%y):x;
}