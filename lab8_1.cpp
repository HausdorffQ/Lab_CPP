#include <iostream>
using namespace std;
class point
{
  private:
    int _x, _y;

  public:
    point(int x = 0, int y = 0) : _x{x}, _y{y} {}
    ~point() {}
    point &operator--()
    { //前置
        --this->_x;
        --this->_y;
        return *this;
    }
    const point operator--(int)
    { //后置
        point t = *this;
        this->_x--;
        this->_y--;
        return t;
    }
    point &operator++()
    { //前置
        ++this->_x;
        ++this->_y;
        return *this;
    }
    const point operator++(int)
    { //后置
        point t = *this;
        this->_x++;
        this->_y++;
        return t;
    }
    friend ostream &operator<<(ostream &os, const point &p)
    {
        os << "(" << p._x << "," << p._y << ")";
        return os;
    }
};

int main(void)
{
    point p1(0, 0), p2(0, 0);
    cout << ++p1 << ' ' << p1++ << ' ' << p1 << endl;
    cout << --p2 << ' ' << p2-- << ' ' << p2 << endl;
}