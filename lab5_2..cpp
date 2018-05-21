#include <iostream>
using namespace std;
class CPU
{
  private:
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
    CPU_Rank Rank;
    int frequency;
    double voltage;
  public:
    //构造函数
    CPU(CPU_Rank rk = CPU_Rank::p1, int fq = 0, double vt = 0)
        : Rank{rk}, frequency{fq}, voltage{vt}
    {
        cout << "CPU init." << endl;
    }
    //拷贝构造
    CPU(const CPU &c)
    {
        Rank = c.Rank;
        frequency = c.frequency;
        voltage = c.voltage;
    }
    ~CPU() { cout << "CPU destory." << endl; }
    void run() { cout << "CPU is running." << endl; }
    void stop() { cout << "CPU is stopped." << endl; }
};

int main(int argc, char *args[])
{
    if(1){
        CPU cpu{};
        cpu.run();
        cpu.stop();
    }
    cout << "end." << endl;
}