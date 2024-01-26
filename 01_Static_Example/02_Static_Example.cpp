//02_Static_Example.cpp
//====================
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
        void display_roi()
        {
            cout << "roi=" << roi << endl;
        }
    
};
float Account::roi = 3.5; //static member variables need to be define outside the class.
int main()
{
    Account a1;
    a1.display_roi();
    //cout << "roi=" << Account::roi << endl;

    return 0;
}

/*
op:
====
roi=3.5
*/
