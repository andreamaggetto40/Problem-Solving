#include <iostream>
#include <vector>

using std::vector;

bool zero(const vector<int>& vect){
    if(!vect.size()) return false;
    else{
        if(vect.size() == 1 and vect.at(0) == 0) return true;

        int amount{0}; bool check{false};
        for(size_t i{0}; i < vect.size() and !check; ++i){
            amount += vect.at(i);
            for(size_t j{i + 1}; j < vect.size(); ++j){
                amount += vect.at(j);
                if(!amount) check = true;
            }
        }
        if(check){
            size_t current_sub{1},actual_sub{0}; amount = 0;

            for(size_t i{0}; i < vect.size(); ++i){
                amount += vect.at(i);
                for(size_t j{i + 1}; amount and j < vect.size(); ++j){
                    amount += vect.at(j);
                    ++current_sub;
                }
                if(current_sub > actual_sub){
                    actual_sub = current_sub;
                    current_sub = 1;
                    amount = 0;
                }
            }

            std::cout << "Biggest subarray is : " << actual_sub << "\n";

            return check;
        }
    }
}


int main(int argc, char const *argv[])
{
    vector<int> v{-1,1,-10,2,3,4,5};

    bool check = zero(v);

    std::cout << check;
}
