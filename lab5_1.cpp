#include <iostream>
using namespace std;
typedef enum
{
    p1 = 1,
    p2,
    p3,
    p4,
    p5,
    p6,
    p7
} CPU_Rank;
class CPU
{
  private:
    CPU_Rank Rank;
    int frequency;
    double voltage;

  public:
    CPU(CPU_Rank rk = CPU_Rank::p1, int fq = 0, double vt = 0)
        : Rank{rk}, frequency{fq}, voltage{vt} {};
    CPU(const CPU &c)
    {
        Rank = c.Rank;
        frequency = c.frequency;
        voltage = c.voltage;
    }
    CPU &run()
    {
        cout << "CPU is running." << endl;
        return *this;
    }
    CPU &stop()
    {
        cout << "CPU is stopped." << endl;
        return *this;
    }
    CPU_Rank getRank() { return Rank; }
    int getFrequency() { return frequency; }
    double getVoltage() { return voltage; }
};

class ram
{
  public:
    ram(){};
    ram(const ram &r){};
};
class cdrom
{
  public:
    cdrom(){};
    cdrom(const cdrom &cd){};
};
class computer
{
  private:
    CPU icpu;
    ram iram;
    cdrom icdrom;

  public:
    computer(CPU c = {}, ram r = {}, cdrom cd = {}) : icpu{c}, iram{r}, icdrom{cd}
    {
        cout << "init." << endl;
    }
    computer(const computer &cp)
    {
        icpu = cp.icpu;
        iram = cp.iram;
        icdrom = cp.icdrom;
        cout << "copy." << endl;
    }
    void run()
    {
        cout << "running." << endl;
    }
    void stop()
    {
        cout << "stopped." << endl;
    }
};
int main(int argc, char *args[])
{
    computer cp1{};
    computer cp2 = cp1;
    return 0;
}