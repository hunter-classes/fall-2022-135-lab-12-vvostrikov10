#include <iostream>
#include <vector>
#include "funcs.h"

int main(){
    std::vector<int> a = makeVector(5);
    for(int i: a) std::cout << i << ' ';
    std::cout << std::endl;

    std::vector<int> v{1,2,-1,3,4,-1,6};
    std::vector<int> b = goodVibes(v);
    for(int i: b) std::cout << i << ' ';
    std::cout << std::endl;

    std::vector<int> v1{1,2,3};
    std::vector<int> v2{4,5};
    gogeta(v1, v2);
    for(int i: v1) std::cout << i << ' ';
    std::cout << std::endl;
    for(int i: v2) std::cout << i << ' ';
    std::cout << std::endl;

    std::vector<int> v3{1,2,3};
    std::vector<int> v4{4,5};
    std::vector<int> v5 = sumPairWise(v3, v4);
    for(int i: v5) std::cout << i << ' ';
    std::cout << std::endl;

    return 0;
}