#include "Parser.cpp"




class Solver{
    int max_weight;
    std::vector<items_elem> items;
public:
    Solver(std::pair<double, std::vector<items_elem>>);
    std::vector<bool> solve();

};
