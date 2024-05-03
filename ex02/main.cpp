/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 23:43:09 by omakran           #+#    #+#             */
/*   Updated: 2024/05/03 22:07:11 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identify.hpp"

int main()
{
    Base *ptr = generate();  // Generate a random Base pointer
    identify(*ptr);          // Identify the dynamic type of the object pointed to by ptr
    identify(ptr);           // Passes the pointer itself, not the object it points to
    delete ptr;              // Deallocate the dynamically allocated memory

    return 0;
}
