#include <iostream>
using namespace std;

long fact(int);
int main()
{
    int n = 12;
    unsigned long long factorial = 1;
    factorial = fact(n);
    cout<<n<<"!="<<factorial<<endl;
    return 0 ;
}

long fact(int ip) {
    if (ip == 1) {
        return 1;
    }
    else {
        return ip * fact(ip - 1);
    }
}