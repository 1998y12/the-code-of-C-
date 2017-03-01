//
//  main.cpp
//  20170301_c++字符串
//
//  Created by jinyu on 2017/3/1.
//  Copyright © 2017年 jinyu. All rights reserved.
//

#include <iostream>
#include <string>
#include<sstream>
using namespace std;

inline void test(const char *title,bool value)
{
    cout<<title<<(value?"return true":"return false")<<endl;
}
int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    
    //返回字符串的长度
    cout<<"字符串s1长度： "<<s1.length()<<endl;
    cout<<"字符串s2长度： "<<s2.length()<<endl;
    
    //比较s1和s2的大小
    int b=s1.compare(s2);
    cout<<"字符串s1 ";
    if(b<0) cout<<"小于"<<" ";
    else if(b>0) cout<<"大于"<<" ";
    else    cout<<"等于"<<" ";
    cout<<"字符串s2"<<endl;
    
    //比较运算符的测试
    test("\"ABC\"<=s1 ","ABC"<=s1);
    test("\"ABC\"<=s2 ","ABC"<=s2);
    
    //连接运算符的测试
    string s=s1;
    s+=s2;
    cout<<"s=s1+s2 : "<<s<<endl;
    
    //将字符串s2添加到s1末尾
    s1.append(s2);
    cout<<"新的字符串s1： "<<s1<<endl;
    
    //查找字符串
    string s3;
    cout<<"输入你要查找的字符或字符串： ";
    getline(cin,s3);
    if(s1.find(s3)>s1.length())  cout<<"找不到"<<endl;
    else cout<<"字符串s3: "<<s3<<"在s1的位置是： "<<s1.find(s3)<<endl;    //找到的是下标，可以找单个字符或字符串。
    
    
    
    return 0;
}
