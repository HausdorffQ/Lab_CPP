#include<iostream>
#include<string>
using namespace std;
string strcpy(string str1,string str2){
    return str1+str2;
}
int main(void){
    string str1="hello";
    string str2=" world!";
    string str3=strcpy(str1,str2);
    cout<<str3<<endl;
}