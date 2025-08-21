#include <iostream>
using namespace std;

void ParamChange(int formal)
{
    cout << formal << endl;
    formal = 100;
    cout << formal << endl;
}

int main()
{
    int actual = 50;
    cout << actual << endl;
    ParamChange(actual);
    cout << actual << endl;
    return 0;
}