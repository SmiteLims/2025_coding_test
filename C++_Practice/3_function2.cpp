#include <iostream>

//using namespace std;

int AddNumbers(int, int); // prototype

int main(){
    int result = 0;
    result = AddNumbers(100,200);
    std::cout << result << std::endl;
    return 0;
}

int AddNumbers(int first, int second){
    return first+second;
}