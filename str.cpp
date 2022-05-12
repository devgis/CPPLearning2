#include <iostream>
#include <cstring>
 
using namespace std;
 
int main ()
{
   char str1[13] = "runoob";
   char str2[13] = "google";
   char str3[13];
   int  len ;
 
   // 复制 str1 到 str3
   strcpy( str3, str1);
   cout << "strcpy( str3, str1) : " << str3 << endl;
 
   // 连接 str1 和 str2
   strcat( str1, str2);
   cout << "strcat( str1, str2): " << str1 << endl;
 
   // 连接后，str1 的总长度
   len = strlen(str1);
   cout << "strlen(str1) : " << len << endl;
 
   string str4 = "runoob";
   string str5 = "google";
   string str6;
   //int  len ;
 
   // 复制 str1 到 str3
   str6 = str4;
   cout << "str6 : " << str6 << endl;
 
   // 连接 str1 和 str2
   str6 = str4 + str5;
   cout << "str4 + str5 : " << str6 << endl;
 
   // 连接后，str3 的总长度
   len = str6.size();
   cout << "str6.size() :  " << len << endl;
 
   return 0;
}