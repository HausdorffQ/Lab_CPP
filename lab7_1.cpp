#include<iostream>
using namespace std;
class Animal{
    protected:
      int age;
};
class dog:public Animal{
    public:
      void setAge(int a) { this->age = a; }
      int getAge() { return this->age; }
};

int main(void){
    dog d1;
    d1.setAge(2);
    cout << d1.getAge() << endl;
}
