04_Virtual.cpp:
==============
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
    Parent o1;
    Parent *p = &o1;
    p->display();
    //cout<<"Hello World";
    Child c1;
    p = &c1;
    p->display();

    return 0;
}


//Compilation Error:
//=======================
/*
main.cpp: In function ‘int main()’:
main.cpp:25:12: error: cannot declare variable ‘o1’ to be of abstract type ‘Parent’
   25 |     Parent o1;
      |            ^~
main.cpp:12:7: note:   because the following virtual functions are pure within ‘Parent’:
   12 | class Parent{
      |       ^~~~~~
main.cpp:14:18: note:     ‘virtual void Parent::display()’
   14 |     virtual void display() = 0;
      |                  ^~~~~~~
*/