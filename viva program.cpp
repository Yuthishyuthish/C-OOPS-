#include <iostream>
using namespace std;
class Fruit {
private:
    std::string name;
public:
    Fruit(std::string n) : name(n) {}
    std::string get_name() {
        return name;
    }
    void print() {
        std::cout << "Fruit: " << name << std::endl;
    }
};
int main() {
    Fruit apple("Apple");
    Fruit banana("Banana");
    Fruit mango("mango");
    Fruit watermelon("watermelon");
    std::cout << "Details of Fruit 1:" << std::endl;
    apple.print();
    std::cout << std::endl;
    std::cout << "Details of Fruit 2:" << std::endl;
    banana.print();
    std::cout << std::endl;
    std::cout << "Details of Fruit 3:" << std::endl;
    mango.print();
    std::cout << std::endl;
    std::cout << "Details of Fruit 4:" << std::endl;
    watermelon.print();
    std::cout << std::endl;
    return 0;
}
