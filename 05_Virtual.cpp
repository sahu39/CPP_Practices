//05_Virtual.cpp:
//============
#include <iostream>

using namespace std;
class Parent{
    public:
    virtual void display() = 0;
};
class Child:public Parent{
    public:
    virtual void display()
    {
        cout << "Child class " << __func__<< endl;
    }
};
int main()
{
    //Parent o1;
    Parent *p;
    //p->display();
    //cout<<"Hello World";
    Child c1;
    p = &c1;
    p->display();

    return 0;
}
//op:
//====
//Child class display