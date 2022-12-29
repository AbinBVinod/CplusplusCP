#include<iostream>


int main(){

int rows;
int columns;
int symbol;

std::cout << "rows";
std::cin >> rows;

std::cout << "columns";
std::cin >> columns;

std::cout  << "symbol";
std::cin >> symbol;


for(int i = 1; i <= rows; i++){
for(int j = 1; j <= columns; j++){
    std::cout << symbol ;
}
std::cout << '\n';
}

}