/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:31:04 by yuboktae          #+#    #+#             */
/*   Updated: 2023/12/13 18:36:51 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# define RESET "\033[0m"
# define MAGENTA "\033[1;35m"
# define CYAN "\033[1;36m"
# define GREEN "\033[1;32m"

# include <iostream>
# include <string>

template <typename T>
void swap(T &a, T &b) {
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
T min(T a, T b) {
    return a < b ? a : b;
}

template <typename T>
T max(T a, T b) {
    return a > b ? a : b;
}

#endif