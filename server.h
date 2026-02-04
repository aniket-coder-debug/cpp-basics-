#include <iostream>

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