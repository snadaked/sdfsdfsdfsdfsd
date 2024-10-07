#include "Parser.h"

items_elem::items_elem(int i, item it){
    first = i;
    second = it;
}



std::pair<double, std::vector<items_elem>> Parser::parse(std::string filename){
    std::ifstream File(filename);
    std::vector<items_elem> items;
    std::pair<double, std::vector<items_elem>> res = std::make_pair(0.0,items);

    if(!File.is_open()) {
        std::cout << "can not read file" << std::endl;
        return res;
    }

    int n;
    File >> n;
    File >> res.first;

    double first, second;

    for(int i = 0; i<n; i++){
        File >> first;
        File >> second;
        res.second.push_back(items_elem(i, std::make_pair(first, second)));
    }

    File.close();
    return res;

}
