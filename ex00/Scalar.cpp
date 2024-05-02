/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 17:05:35 by omakran           #+#    #+#             */
/*   Updated: 2024/05/02 20:29:22 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

ScalarConverter::ScalarConverter() {
    
}

ScalarConverter::ScalarConverter( const ScalarConverter& other ) {
    *this = other;
}

ScalarConverter& ScalarConverter::operator=( const ScalarConverter& __unused other ) {
    return *this;
}

ScalarConverter::~ScalarConverter () {
    
}

void ScalarConverter::convert(const std::string& arg) {
    char    c;
    int     i;
    float   f;
    double  d;
    /*
    The variable num is declared as a double, which means it can hold floating-point numbers
    with a higher precision compared to float.
    */
    double   num;
    
    // is used to convert a string to a float value.
    // However, in this case, the result of std::stof() is assigned to a double variable num.
    num = std::stof(arg);
    c = static_cast<char>(num);
    i = static_cast<int>(num);
    f = static_cast<float>(num);
    d = static_cast<double>(num);

    if (i >= 32 && i <= 126)
        std::cout << "char: '" << c << "'" << std::endl;
    else if (std::isnan(num) || std::isinf(num))

    
        std::cout << "char: impossible\n";
    else
        std::cout << "char: Non displayable\n";
    if (std::isnan(num) || std::isinf(num))
        std::cout << "int: impossible\n";
    else
        std::cout << "int: " << i << std::endl;

    // Without std::setprecision(1), the default behavior is to print all available digits after the decimal point.
    std::cout << std::setprecision(1);
    std::cout << "float: " << std::fixed << f << "f" << std::endl;
    std::cout << "double: " << d << std::endl;
}
