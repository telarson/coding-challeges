//3or5.cpp
//https://projecteuler.net/problem=1
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    vector<int> toSum = {};
    for(int i = 3; i < 1000; i++){
        if(i%3 == 0 || i%5 == 0){
            toSum.push_back(i);
        }
    }

    cout << accumulate(toSum.begin(), toSum.end(), 0) << endl;
    return 0;
}
