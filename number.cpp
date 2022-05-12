#include <iostream>
#include <ctime>
#include <cmath>
#include <cstdlib>
using namespace std;
 
int main ()
{
   // 数字定义
   short  s;
   int    i;
   long   l;
   float  f;
   double d;
   
   // 数字赋值
   s = 10;      
   i = 1000;    
   l = 1000000; 
   f = 230.47;  
   d = 30949.374;
   
   // 数字输出
   cout << "short  s :" << s << endl;
   cout << "int    i :" << i << endl;
   cout << "long   l :" << l << endl;
   cout << "float  f :" << f << endl;
   cout << "double d :" << d << endl;

   // 数字定义
   short  s2 = 10;
   int    i2 = -1000;
   long   l2 = 100000;
   float  f2 = 230.47;
   double d2 = 200.374;
 
   // 数学运算
   cout << "sin(d) :" << sin(d2) << endl;
   cout << "abs(i)  :" << abs(i2) << endl;
   cout << "floor(d) :" << floor(d2) << endl;
   cout << "sqrt(f) :" << sqrt(f2) << endl;
   cout << "pow( d, 2) :" << pow(d2, 2) << endl;
 
   int i3,j3;
 
   // 设置种子
   srand( (unsigned)time( NULL ) );
 
   /* 生成 10 个随机数 */
   for( i3 = 0; i3 < 10; i3++ )
   {
      // 生成实际的随机数
      j3= rand();
      cout <<"随机数： " << j3 << endl;
   }
 
   return 0;
}