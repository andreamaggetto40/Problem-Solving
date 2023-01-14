#include <iostream>
#include <vector>

using std::vector; using std::cout;

int sub(const vector<int>& v){
    bool check{false}; int res{};

    for(size_t i{0}; i < v.size() and !check; ++i){
        res += v.at(i);
        for(size_t j{i + 1}; j < v.size() and !check; ++j){
            res += v.at(j);

            if(!res) check = true;
        }
    }
    if(!check) res = 0;
    else{
        size_t current{1},actual{0};

        for(size_t i{0}; i < v.size(); ++i){
            res = v.at(i);
            for(size_t j{i + 1}; j < v.size() and res; ++j){
                res += v.at(j); ++current;
            }
            if(!res){
                if(current > actual){
                    actual = current;
                    current = 1;
                }
            }
        }

        res = actual;
    }

    return res;
}


int main(int argc, char const *argv[])
{
    vector<int> first{-1, 1, -10, 2, 3, 4, 5};

    cout << sub(first);

    
}
