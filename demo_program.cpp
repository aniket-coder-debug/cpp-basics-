#include <iostream>
using namespace std;

class demo
{
    int iNo1;
    int iNo2;

public:
    demo()
    {
        iNo1 = 0;
        iNo2 = 0;
    }

    demo(int param1 , int param2)
    {
        iNo1 = param1;
        iNo2 = param2;
    }

    int Addition()
    {
        return iNo1 + iNo2;
    }

};

int main(void)
{
    int iNo1;
    int iNo2;
    int iAns;

    class demo obj1;
    iAns = obj1.Addition();
    cout << "Answer is\t" << iAns << endl;

    cout << "Enter two numbers:\t";
    cin >> iNo1 >> iNo2;
    demo obj2(iNo1 , iNo2);
    iAns = obj2.Addition();
    cout << "Answer is\t" << iAns << endl;

    return 0;
}

