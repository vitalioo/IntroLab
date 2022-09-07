#include <iostream>
#include "module1.h"
#include "module2.h"
#include "module3.h"
using namespace std;

int main()
{
    cout <<  "Hello world!" << endl;

    cout << "Name from module 1: " << Module1::getMyName() << endl;
    cout << "Name from module 2: " << Module2::getMyName() << endl;

    using namespace Module1;
    cout << "Name from module 1: " << getMyName() << endl;
    cout << "Name from module 2: " << Module2::getMyName() << endl;

    using Module2::getMyName;
    cout << "Name from module 2: " << getMyName() << endl;

    cout << "Name from module 3: " << Module3::getMyName() << endl;

    return 0;
}
