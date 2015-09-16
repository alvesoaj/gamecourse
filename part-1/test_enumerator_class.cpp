#include <iostream>

int main(int argc, char *argv[]){
    enum class Color {
        RED,
        BLUE
    };
 
    enum class Fruit {
        BANANA,
        APPLE
    };
 
    Color color = Color::RED;
    Fruit fruit = Fruit::BANANA;
    
    if (color == fruit) {
        std::cout << "color and fruit are equal\n";
    } else {
        std::cout << "color and fruit are not equal\n";
    }
 
    return 0;
}