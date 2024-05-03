/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 23:43:03 by omakran           #+#    #+#             */
/*   Updated: 2024/05/03 22:12:37 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identify.hpp"

Base::~Base() {}

Base* generate(void){
    // random number generator.
    srand((unsigned) time(NULL));
    int rdm = 1 + (rand() % 3);
    switch(rdm){
        case 1:
            // returns a pointer to a dynamically allocated instance of class A.
            return new A;
        case 2:
            return new B;
        case 3:
            return new C;
    }
    return (NULL);
}


void identify(Base* p) {
    if (dynamic_cast<A*>(p)) {
        std::cout << "A" << std::endl;
    } else if (dynamic_cast<B*>(p)) {
        std::cout << "B" << std::endl;
    } else if (dynamic_cast<C*>(p)) {
        std::cout << "C" << std::endl;
    }
}

void    identify(Base& p){
    try {
        A& a = dynamic_cast<A&>(p);
        std::cout << "A\n";
        (void)a;
    }
    catch (std::bad_cast){}
    try {
        B& b = dynamic_cast<B&>(p);
        std::cout << "B\n";
        (void)b;
    }
    catch (std::bad_cast){}
    try {
        C& c = dynamic_cast<C&>(p);
        std::cout << "C\n";
        (void)c;
    }
    catch (std::bad_cast){}
}