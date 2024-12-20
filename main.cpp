#include <iostream>
#include <fstream>
#include <cstdlib>

int main() {
    std::cout << "Rock Paper Scissors!"<< std::endl;
    char user_choice;
    std::cout << "Enter choice(r, p, s): "; std::cin >> user_choice;
    std::fstream seed_file("main.txt");
    char seed;
    seed_file >> seed;
    seed++;
    std::cout << seed;
    
    
}
