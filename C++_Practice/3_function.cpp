#include <iostream>
// using namespace std;


void PrintWorld(){
    std::cout << "Hello, World!" << std::endl;
    std::cout << "from PrintWorld()" << std::endl;
}

void PrintHello(){
    std::cout << "Hello" << std::endl;
    PrintWorld();
    std::cout << "from PrintHello()" << std::endl;
}

int main(){
    PrintHello();
    std::cout << "from main()" << std::endl;
    
    return 0;
}