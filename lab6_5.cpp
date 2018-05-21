#include<iostream>
#include<string>
using namespace std;

class Employee{
    private:
        string name,address,city,post;
    public:
        Employee(string n,string a,string c,string p)
        :name{n},address{a},city{c},post{p}{}
        void Display(){
            cout<<"name:"<<name<<endl;
            cout<<"address:"<<address<<endl;
            cout<<"city:"<<city<<endl;
            cout<<"post:"<<post<<endl;
            cout<<endl;
        }
        void changeName(const string& n){name=n; }
};
int main(void){
    Employee employee{"zjz","jx","gz","341300"};
    employee.Display();
    employee.changeName("zqh");
    employee.Display();
}