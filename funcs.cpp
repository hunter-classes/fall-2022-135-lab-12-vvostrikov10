#include <iostream>
#include <vector>
#include "funcs.h"
#include <stdlib.h>

std::vector<int> makeVector(int n){
    std::vector<int> v;
    for(int i = 0; i < n; i++){
        v.push_back(i);
    }
    return v;
}

std::vector<int> goodVibes(const std::vector<int>& v){
    std::vector<int> ans;
    for(int i = 0; i < v.size(); i++){
        ans.push_back(abs(v.at(i)));
    }
    return ans;
}

void gogeta(std::vector<int> &goku, std::vector<int> &vegeta){
    for (int i = 0; i < vegeta.size(); i++) goku.push_back(vegeta.at(i));
    for (int i = 0; i < vegeta.size(); vegeta.pop_back());
}

std::vector<int> sumPairWise(const std::vector<int> &v1, const std::vector<int> &v2){
    std::vector<int> ans;
    int i = 0;
    for (i; i < v1.size() && i < v2.size(); i++){
        ans.push_back(v1.at(i) + v2.at(i));
    }
    for (i; i < v1.size(); i++){
        ans.push_back(v1.at(i));
    }
    for (i; i < v2.size(); i++){
        ans.push_back(v2.at(i));
    }
    return ans;
}