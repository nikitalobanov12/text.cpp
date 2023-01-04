//g++ -pedantic -Wall -Wextra -std=c++17 text.cpp -o test
//rand()%a+b where the a is the range and b is the offset
#include <iostream>
#include <ctime>

int main(){
    srand(time(0)); // this line of code makes sure that your random numbers are different every time 
    for (unsigned i = 0; i <= 10;i++){
        std::cout << rand() << std::endl;
    }
    return 0;
}

//