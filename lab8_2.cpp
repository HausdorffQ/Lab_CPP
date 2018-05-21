#include <iostream>
using namespace std;
class vehicle{
public:
  vehicle(){cout << "vehicle" << endl;}
  virtual void run() { cout << "run." << endl; }
  virtual void stop() { cout << "stop." << endl; }
};
class bicycle : virtual public vehicle{
public:
  bicycle(){cout << "bicycle" << endl;}
  void run() { cout << "bicycle run." << endl; }
  void stop() { cout << "bicycle stop." << endl; }
};
class motorcar : virtual public vehicle{
public:
  motorcar(){cout << "motorcar" << endl;}
  void run() { cout << "motorcar run." << endl; }
  void stop() { cout << "motorcar stop." << endl; }
};
class motorbicycle : public bicycle, public motorcar{
public:
  motorbicycle(){cout << "motorbicycle" << endl;}
  void run() { cout << "motorbicycle run." << endl; }
  void stop() { cout << "motorbicycle stop." << endl; }
};
int main(void){
  motorbicycle mb;
  mb.run();
  mb.stop();
}
