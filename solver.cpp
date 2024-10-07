#include "Solver.h"




Solver::Solver(std::pair<double, std::vector<items_elem>> input){
    max_weight = input.first;
    items = input.second;
}


std::vector<bool> Solver::solve(){
    std::vector<items_elem> :: iterator start, end;
    start = items.begin();
    end = items.end();
    sort(start, end);
    double weight = 0, value = 0;
    int i;
    std::vector<bool> ans(items.size());
    for(i = 0; i<items.size(); i++) ans[i] = false;

    for( i = 0; i < items.size() && weight < max_weight; i++){
        if(weight + items[i].second.second < max_weight) {
            ans[items[i].first] = true;
            value += items[i].second.first;
            weight += items[i].second.second;
        }
    }
    std::cout << weight << std::endl;
    return ans;
}
