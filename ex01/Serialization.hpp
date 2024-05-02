/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 22:11:15 by omakran           #+#    #+#             */
/*   Updated: 2024/05/02 22:26:21 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

# include <cstdint>
# include <iostream>
# include <Data.hpp>


class Serialization
{
    /* ####################################
    #          Orthodox Style             #
    # ################################### */

    // constructor:
    Serialization();
    // copy constructor:
    Serialization( const Serialization& other );
    // assignement operator:
    Serialization& operator=( const Serialization& other );
    // destructor:
    ~Serialization();

public:
    static uintptr_t    serialize(Data* ptr);
    static Data*        deserialize(uintptr_t raw);

};


#endif