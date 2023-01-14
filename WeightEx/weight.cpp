#include <iostream>
#include <vector>

using std::cout; using std::vector;

int weight(const vector<int>& vect){
    int max{vect.at(0)},current{0};

    for(size_t i{0}; i < vect.size(); ++i){
        for(size_t j{i}; j < vect.size(); ++j){
            current += vect.at(j);

            if(current > max) max = current;
        }
        current = 0;
    }

    return max;
}


int main(int argc, char const *argv[])
{
    vector<int> v{-1, 1, -10, 2, 3, 4, 5  };

    cout << weight(v);


}
