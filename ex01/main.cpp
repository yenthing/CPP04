#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const int n = 100;
    Animal *animals[n];
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
        std::cout << "Sum of i " << i << std::endl;
    }
    // for (int i = 0; i < n; i++)
    //     delete animals[i];
    return 0;
}
