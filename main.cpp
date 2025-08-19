#include <iostream>
#include <string_view>

enum class Animal
{
    pig,
    chicken,
    goat,
    cat,
    dog,
    duck
};
constexpr std::string_view getAnimalName(Animal name)
{
    switch (name)
    {
        case Animal::pig:   return "pig";
        case Animal::chicken: return "chicken";
        case Animal::goat:  return "goat";
        case Animal::cat:   return "cat";
        case Animal::dog:   return "dog";
        case Animal::duck:  return "duck";
        default : return "???";
    }
}

constexpr int printNumberOfLegs(Animal name)
{
        switch (name)
    {
        case Animal::pig:   
        case Animal::goat:  
        case Animal::cat:   
        case Animal::dog:   return 4;
               
        case Animal::chicken: 
        case Animal::duck:  return 2;
        default: return 0;
    }
}

void printResult(Animal name){
    std::cout<<"A "<<getAnimalName(name)<<" has "<<printNumberOfLegs(name)<<" legs.\n";

} 

int main(){
    printResult(Animal::cat);
    printResult(Animal::chicken);
}