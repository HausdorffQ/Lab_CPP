#include <iostream>
#include <string>
using namespace std;
typedef enum{male = 1,female} sex;
class people{
  private:
    class date{
      private:
        int year, mouth, day;
      public:
        date(int y = 1970, int m = 1, int d = 1)
            : year{y}, mouth{m}, day{d} {};
        date(const date &d){
            year = d.year;
            mouth = d.mouth;
            day = d.day;
        }
        int getYear() const{ return year; }
        int getMouth() const{ return mouth; }
        int getDay()const { return day; }
        string toString(){
            char ss[12];
            sprintf(ss, "%d\\%d\\%d", year, mouth, day);
            return string(ss);
        }
        bool operator==(const date& cmp){
            if(year!=cmp.getYear()||
               mouth!=cmp.getMouth()||
               day!=cmp.getDay()
               )
                return false;
            else
                return true;
        }
    };
    string name;
    int number;
    sex __sex;
    string id;
    date birthday;
  public:
    people(){}
    people(string _name, int _number, sex _sex, date _birthday, string _id)
        : name{_name}, number{_number}, __sex{_sex}, id{_id}, birthday{_birthday} {};
    people(const people &p){
        name = p.name;
        number = p.number;
        __sex = p.__sex;
        id = p.id;
    }
    string getName()const { return name; }
    int getNumber()const { return number; }
    sex getSex() const{ return __sex; }
    date getBirthday() const{ return birthday; }
    string getId()const { return id; }
    friend ostream &operator<<(ostream &os, const people& out){
        os << "name:" << out.getName() << endl;
        os << "sex:" << out.getSex() << endl;
        os << "birthday:" << out.getBirthday().toString() << endl;
        os << "ID:" << out.getId() << endl;
        return os;
    }
    bool operator==(const people& cmp){
        if(name!=cmp.getName()||
            __sex!=cmp.getSex()||
            !(birthday==cmp.getBirthday())||
            id!=cmp.getId())
            return false;
        else
            return true;
    }
    people operator-(const people& init){
        name = init.getName();
        __sex = init.getSex();
        birthday = init.getBirthday();
        id = init.getId();
        return *this;
    }
};
int main(int args, char *argc[]){
    people p{{"zjx"}, 0, sex::female, {1990, 1, 1}, {"1111111"}};
    cout << p<<endl;
    people p1 = p;
    cout << p1<<endl;
    people p2;
    p2 - p;
    cout << p2 << endl;
    cout << (p == p1)<<endl;
}
