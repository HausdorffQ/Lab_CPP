#include<iostream>
#include<cstdio>
char* strcat(char *in1,int size1,char *in2,int size2){
    char *out = new char[size1 + size2];
    int i = 0;
    while(out[i]=in1[i++])std::cout<<out[i-1]<<std::endl;
    i--;
    while(out[i]=in2[(i++)-size1])std::cout<<out[i-1]<<std::endl;
    return out;
}

int main(void){
    char *in1 = new char[6]{"hello"};
    char *in2 = new char[8]{" world!"};
    char *out = strcat(in1, 6, in2, 8);
    std::cout << out << std::endl;
}