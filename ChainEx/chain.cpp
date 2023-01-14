#include <iostream>
#include <vector>

using std::vector; using std::cout; using std::string;

bool is_chain(const vector<string>& vect, const int& n){
    if(!vect.size()) return false;
    string current{},next{}; bool check = true;

    for(size_t i = 0; i < vect.size() - 1 and check; ++i){
        for(size_t j = vect.at(i).size() - n; j < vect.at(i).size(); ++j){
            current += vect.at(i).at(j);
        }
        for(size_t j = 0; j < n; ++j){
            next += vect.at(i + 1).at(j);
        }
        if(current == next){
            current = next = "";
        }
        else check = false;
    }

    return check;
}


int main(int argc, char const *argv[])
{
    vector<string> first{"nave","avena"};

    /*string current{},next{}; bool check{true}; int n = 2;

    for(size_t i{0}; i < first.size() - 1 and check; ++i){
        //current
        for(size_t j = first.at(i).size() - n; j < first.at(i).size(); ++j){
            current += first.at(i).at(j);
        }
        //next
        for(size_t j{0}; j < n; ++j){
            next += first.at(i + 1).at(j);
        }
        if(current == next) current = next = "";
        else check = false;
    }

    /*/

    bool check = is_chain(first,2);

    cout << check;
}
