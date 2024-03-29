#include <iostream>
#include <typeinfo> 
#include <iomanip>
using namespace std;

//当输入两个数相等时，最大公约数还是其本身，等于说不受输入数值影响。找公约数的前提是，输入为整型，等于说受输入类型影响。
//最大公约数计算：两数能同时被 i 整除。
//最小公倍数计算：两数相乘 / 最大公约数。

int main()
{
   int a,b;
   int MAX,MIN,i; 
   cout <<"输入两个数: ";
   cin >> a >> b;
   cout<<"检查输入数据类型"<<typeid(a).name()<<setw(6)<<typeid(b).name()<<endl;
   //建议输入数据非法时，做异常抛出 throw 

   // 找到两个数中，最大的 
   MAX=a?b:a,b;

   // 确定除数，被除数 
   if(a==MAX)
      MIN=b;
   else        
      MIN=a;   

   // 求最大公约数, 
   for(i=MIN;i>1;i--)      
   {
      if((MAX%i==0)&&(MIN%i==0)) 
           break;       
      else          
           continue;   
   }       

    cout<<"最大公约数"<<i<<endl;    
    cout<<"最小公倍数"<<(a*b)/i; 
    return 0;
}