/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 23:43:06 by omakran           #+#    #+#             */
/*   Updated: 2024/05/03 17:45:08 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IDENTIFY_HPP
# define IDENTIFY_HPP

# include <cstdlib>
# include <iostream>

/* ################################################################
    These four classes don’t have to be designed in the Orthodox
                    Canonical Form.
* ################################################################# */ 
class Base
{
public:
    virtual ~Base();
};

class A: public Base {};
class B: public Base {};
class C: public Base {};

Base*   generate(void);
void    identify(Base* p);
void    identify(Base& p);

#endif