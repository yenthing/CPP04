#pragma once

#include "Animal.hpp"

class Brain
{
    public:
        Brain();
        virtual ~Brain();
        Brain(const Brain &copy);
        Brain &operator=(const Brain &copy);

        virtual std::string catchIdea(int i) const;
        virtual void createIdea(int i, std::string idea);
        virtual void printIdeas() const;
        
        std::string ideas[100];
};

