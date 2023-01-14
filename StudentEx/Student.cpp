#include <iostream>
#include <vector>

using std::vector; using std::cout; using std::string;

/*struct cell{
    string ID{};
    vector<int> marks{};
    cell* next{};
};

using List = cell*;

void preappend(List& l, const string& ID, const vector<int>& marks){
    List to_add = new cell;

    to_add->ID = ID; to_add->marks = marks; to_add->next = l;

    l = to_add;
}

void append(List& l, const string& ID, const vector<int>& marks){
    List iterator{l};
    List to_add = new cell; to_add->ID = ID; to_add->marks = marks; to_add->next = nullptr;

    for(; iterator->next; iterator = iterator->next)

    iterator->next = to_add;
}

void print_iterative(List& l){  
    for(List iterator{l}; iterator; iterator = iterator->next){
        cout << "student : " << iterator->ID << "\n";
        for(size_t i{0}; i < iterator->marks.size(); ++i){
            cout << "Mark : " << iterator->marks.at(i) << "\n";
        }
    }
}

void print_recursive(List& l){
    if(l){
        cout << "Student : " << l->ID << "\n";
        for(size_t i{0}; i < l->marks.size(); ++i){
            cout << "Mark : " << l->marks.at(i) << "\n";
        }
        print_recursive(l->next);
    }
}

vector<int>& max_per_subjects(List& l){
    vector<int> max = vector<int>(l->marks.size()); size_t marks_amount{l->marks.size()};

    for(size_t i{0}; i < marks_amount; ++i){
        size_t actual_max{l->marks.at(i)};
        for(List iterator{l}; iterator; iterator = iterator->next){
            if(iterator->marks.at(i) > actual_max){
                actual_max = iterator->marks.at(i);
            }
        }
        max.at(i) = actual_max;
    }

    return max;
}

vector<float> weighted_avg(List& l, vector<int>& credits){
    size_t l_size{0},above{0},under{0},i{0};

    for(List iterator{l}; iterator; iterator = iterator->next) ++l_size;

    vector<float> averages = vector<float>(l_size);

    for(List iterator{l}; iterator; iterator = iterator->next){
        for(; i < iterator->marks.size(); ++i){
            above += (iterator->marks.at(i) * credits.at(i));
            under += credits.at(i);
        }
        averages.at(i) = (above / under);
        above = under = 0;
    }

    return averages;
}*/


int main(int argc, char const *argv[])
{   
    
}



