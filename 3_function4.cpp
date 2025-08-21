// Default Argument Values

#include <iostream>
// using namespace std;

double CalcCost(double baseCost, double taxRate = 0.06, double shipping = 3.5);

double CalcCost(double baseCost, double taxRate, double shipping){
    return baseCost += (baseCost * taxRate) + shipping;
}

int main(){
    double cost = 0;
    cost = CalcCost(100.0, 0.08, 4.5);
    std::cout << cost << std::endl;
    cost = CalcCost(100.0, 0.08);
    std::cout << cost << std::endl;
    cost = CalcCost(100.0, 0.08);
    std::cout << cost << std::endl;

    return 0;
}