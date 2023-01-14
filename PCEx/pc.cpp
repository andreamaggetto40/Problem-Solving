#include <iostream>
#include <vector>

using std::cout; using std::vector;

struct cell{
    vector<int> sizes{};
    size_t serial_num{};
    cell* next{};
};  

using List = cell*;

class list_pc{
    List pchead{};
    size_t dim{};

    void destroy(List& l){
        if(l){
            destroy(l->next);
            delete l;
        }
    }

    public:
        list_pc(const size_t& dim);
        list_pc(const list_pc& to_copy);
        ~list_pc();
        void read();
        void print() const;
        bool serialSearch(const int& serial);
};

list_pc::list_pc(const size_t& dim) : dim(dim){
    List iterator{};

    for(size_t i{0}; i < dim; ++i){
        List to_add = new cell{};

        to_add->sizes = vector<int>(2);
        to_add->serial_num = i;
        to_add->next = nullptr;

        if(!i){
            pchead = iterator = to_add;
        }
        else{
            iterator->next = to_add;
            iterator = iterator->next;
        }
    }
}

list_pc::list_pc(const list_pc& to_copy){
    List it{},it_to_copy{to_copy.pchead};

    for(size_t i{0}; i < to_copy.dim; ++i){
        List to_add = new cell{};
        
        to_add->serial_num = it_to_copy->serial_num;
        to_add->sizes = vector<int>(it_to_copy->sizes.size());
        to_add->next = nullptr;

        if(!i){
            pchead = it = to_add;
        }
        else{
            it->next = to_add;
            it = it->next;
        }
        it_to_copy = it_to_copy->next;
    }
}

list_pc::~list_pc(){    
    destroy(pchead);
}

void list_pc::print() const{    
    for(List iterator{pchead}; iterator; iterator = iterator->next) cout << "Serial num : " << iterator->serial_num << " " << "Size : " << iterator->sizes.size() << "\n";
}

bool list_pc::serialSearch(const int& serial){
    bool check{false};

    for(List iterator{pchead}; iterator and !check; iterator = iterator->next) check |= (iterator->serial_num == serial);

    return check;
}

int main(int argc, char const *argv[])
{
    
    return 0;
}
