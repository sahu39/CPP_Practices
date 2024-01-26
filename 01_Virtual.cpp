//01_Virtual.cpp:
//=============
#include <iostream>

using namespace std;
class Parent{
    public:
    void display()
    {
        cout << "Parent class " << __func__ << endl;
    }
};
class Child:public Parent{
    public:
    void display()
    {
        cout << "Child class " << __func__<< endl;
    }
};
int main()
{
    Parent o1;
    Parent *p = &o1;
    p->display();
    //cout<<"Hello World";
    Child c1;
    p = &c1;
    p->display();

    return 0;
}

//op:
//====
//Parent class display
//Parent class display

