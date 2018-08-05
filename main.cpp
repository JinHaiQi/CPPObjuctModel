#include <iostream>

using namespace std;

class Base 
{
  public:
    Base(int a){this->a = a;};
    virtual ~Base() {cout << "~Base()";};

    int getA() const {return a;};
    static void instanceCount() {cout << "count is " << count << endl;};
    virtual void print() const{cout << "a is " << a << "count is " << count;};
  private:
    int a;
    static int count;
};

int Base::count = 0;


int main()
{
  Base b1(100);
  cout << "b1的起始内存地址:" << &b1 << endl;
  //cout << "type info 信息:" << ((int*)*(int*)(&b1) - 1) << endl;
  return 0;
}

