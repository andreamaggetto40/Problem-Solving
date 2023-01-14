#include <iostream>
#include <vector>

using std::vector; using std::cout;

int min(const vector<int>& v){
    bool check{false}; int min{0};
    for(size_t i{0}; i < v.size() and !check; ++i){
        check |= (v.at(i) * v.at(i) > 66);
    }
    if(check){
        for(size_t i{0}; i < v.size(); ++i){
            if(v.at(i) * v.at(i) > 66){
                if(!min) min = v.at(i);
                else{
                    if(v.at(i) < min) min = v.at(i);
                }
            }
        }
    }
    else min = -1;

    return min;
}

int main(int argc, char const *argv[])
{
    vector<int> first{2,5,6,10,11,9};

    cout << min(first);

    
}
