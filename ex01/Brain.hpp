#pragma once

#include "Animal.hpp"

//2 individual addresses for each object, values stay the same
class Brain
{
    public:
        Brain();
        ~Brain();
        Brain(const Brain &copy);
        Brain &operator=(const Brain &copy);

        std::string catchIdea(int i) const;
        void createIdea(int i, std::string idea);
        void printIdeas() const;

        std::string ideas[100];
};
