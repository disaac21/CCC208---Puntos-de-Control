#include <iostream>
#include <string>
using namespace std;

class B {
    public:
    virtual ~B(){};
};

class D : public B {};

int main() {
    B* b = new D;
    D* d = dynamic_cast<D*>(b); // Compila!
    return 0;
}