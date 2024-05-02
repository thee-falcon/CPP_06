/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 22:42:47 by omakran           #+#    #+#             */
/*   Updated: 2024/05/02 23:18:20 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main()
{
    Data data = {100};
    uintptr_t x = Serialization::serialize(&data);
    Data* ptr = Serialization::deserialize(x);
    
    // Print the address stored in ptr
    std::cout << "Address stored in ptr: " << ptr << std::endl;

    // Print the address of the original data object
    std::cout << "Address of the original data object: " << &data << std::endl;

    // Print the value of the 'value' member variable of the deserialized object
    std::cout << "Value of 'value' member variable: " << ptr->value << std::endl;

    return 0;
}
