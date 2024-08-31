#include <iostream>
#include <vector>

void printVector() {
    std::vector<char> vec = {1, 2, 3};
    std::vector<int> vecint = {1, 2, 3};

    int stats[4]={3,3,3,4};
    char attributes[4]={3,3,3,4};

    std::cout <<  "vec :" <<sizeof(vec) <<"vec1  :" << vec[1]  <<std::endl ;
    std::cout << "vecint :" <<sizeof(vecint) <<"vecint1:" << vecint[1] << std::endl ;
    std::cout << "stats :" <<sizeof(stats)<<"stats1:" << stats[1] << std::endl ;
    std::cout << "attributes :" <<sizeof(attributes) <<"attributes1:"<< attributes[1] << std::endl ;

}

int main() {
    printVector();

    return 0;
}