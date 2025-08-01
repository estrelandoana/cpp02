/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-l <apaula-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 21:21:14 by apaula-l          #+#    #+#             */
/*   Updated: 2025/07/27 22:42:35 by apaula-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed {
    private:
        int                     _fixedPointValue;
        static const int        _fractionalBits = 8;

    public:
        Fixed();
        Fixed(const Fixed& copy);
        Fixed& operator=(const Fixed& copy);
        ~Fixed();

        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif
