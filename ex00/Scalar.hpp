/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 17:05:36 by omakran           #+#    #+#             */
/*   Updated: 2024/05/01 17:49:17 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP  
# define SCALAR_HPP

# include <iostream>
# include <string>

class ScalarConverter
{
private:
    /* ####################################
    #          Orthodox Style             #
    # ################################### */

    // constructor:
    ScalarConverter();
    // copy constructor:
    ScalarConverter( const ScalarConverter& other );
    // assignement operator:
    ScalarConverter& operator=( const ScalarConverter& other );
public:

    // static method:
    static void convert( std::string& arg);

    // destructor:
    ~ScalarConverter();
};

#endif