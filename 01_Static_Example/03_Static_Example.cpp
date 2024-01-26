//03_Static_Example.cpp:
//======================
//Accessing Static members without any class objects
#include <iostream>

using namespace std;
class Account{
    private:
        int balance;
        static float roi;
    public:
        void setbalance(int b)
        {
            balance = b;
        }
        static void setRoi(float r)
        {
            roi = r;
        }
        static void display_roi()
        {
            cout << "roi=" << roi << endl;
        }
    
};
float Account::roi = 3.5;
int main()
{
    Account a1;
    a1.display_roi();
    Account::display_roi();
    Account::setRoi(5.6);
    Account::display_roi();
    
    //cout << "roi=" << Account::roi << endl;

    return 0;
}

/*
op:
=====

roi=3.5
roi=3.5
roi=5.6

*/