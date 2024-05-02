/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 22:11:10 by omakran           #+#    #+#             */
/*   Updated: 2024/05/02 22:56:01 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

Serialization::Serialization() {
    
}

Serialization::Serialization( const Serialization& other ) {
    *this = other;
}

Serialization& Serialization::operator=( const Serialization& __unused other ) {
    return *this;
}

Serialization::~Serialization () {
    
}

// casts the pointer ptr to an unsigned integer type uintptr_t. 
uintptr_t Serialization::serialize(Data* ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
}

// casts the unsigned integer raw back to a pointer to a Data object. 
Data* Serialization::deserialize(uintptr_t raw) {
    return reinterpret_cast<Data*>(raw);
}