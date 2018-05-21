#include <iostream>
using namespace std;
class base{
protected:
  int number;
public:
  base(int a = 0) : number{a} { cout << "base init." << endl; }
  ~base() { cout << "base destory." << endl; }
};
class derived : public base{
private:
  int number2;
public:
  derived(int a = 0, int b = 0) 
    : base(a), number2{b}{cout << "derived init." << endl;}
  ~derived() { cout << "derived destory." << endl; }
};
int main(void){
  if (1)
    derived test;
}