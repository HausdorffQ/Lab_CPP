#include <iostream>
using namespace std;

class vehicle
{
  protected:
    int maxspeed, weight;

  public:
    vehicle(int max = 0, int we = 0) : maxspeed{max}, weight{we}
    {
        cout << "vehicle init." << endl;
    }
    void run() { cout << "run" << endl; }
    void stop() { cout << "stop" << endl; }
};

class bicycle : virtual public vehicle
{
  protected:
    int Height;

  public:
    bicycle(int max = 0, int we = 0, int he = 0) : vehicle{max, we}, Height{he}
    {
        cout << "bicycle init." << endl;
    }
};
class motorcar : virtual public vehicle
{
  protected:
    int seatnum;

  public:
    motorcar(int max = 0, int we = 0, int se = 0) : vehicle{max, we}, seatnum{se}
    {
        cout << "motorcar init." << endl;
    }
};

class motorbicycle : public bicycle, public motorcar
{
  public:
    motorbicycle(int max = 0, int we = 0, int he = 0, int se = 0) : bicycle(max, we, he), motorcar(max, we, se)
    {
        cout << "motorbicycle init." << endl;
    }
};

int main(void)
{
    motorbicycle mb;
}
