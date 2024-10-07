#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using item = std::pair<double,double>;
struct items_elem{
    int first;
    item second;
    items_elem(int, item);
    friend bool operator<(items_elem a, items_elem b){
        return (a.second.first)/(a.second.second) > (b.second.first)/(b.second.second);
    }
};

class Parser{

public:
    std::pair<double, std::vector<items_elem>> parse(std::string filename);
};
