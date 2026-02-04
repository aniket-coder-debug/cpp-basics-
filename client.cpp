#include <iostream>
#include"server.h"
using namespace std;

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
