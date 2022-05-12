# CPPLearning
 CPP Learning codes
 #### 测试环境
##### VS Code 
##### MinGW-w64


 ### 1. 下载安装编译器
 #### 安装C/C++编译器MinGW-w64。下载地址：https://sourceforge.net/projects/mingw-w64/files/。


 #### 常见错误
vscode 自带的编译会出错

 g++ main.cpp 
 then .\a.exe

 中文乱码

 g++ -o .\test.exe -fexec-charset=GBK .\epevenodd.cpp