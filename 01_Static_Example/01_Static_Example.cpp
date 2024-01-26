//01_Static_Example.cpp:
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

int main()
{
    Account a1;
    a1.display_roi();
    //cout << "roi=" << Account::roi << endl;

    return 0;
}

/*
Compilation Error:
=====================
/usr/bin/ld: /tmp/ccGiNyJm.o: warning: relocation against `_ZN7Account3roiE' in read-only section `.text._ZN7Account11display_roiEv[_ZN7Account11display_roiEv]'
/usr/bin/ld: /tmp/ccGiNyJm.o: in function `Account::display_roi()':
main.cpp:(.text._ZN7Account11display_roiEv[_ZN7Account11display_roiEv]+0x2e): undefined reference to `Account::roi'
/usr/bin/ld: warning: creating DT_TEXTREL in a PIE
collect2: error: ld returned 1 exit status
*/