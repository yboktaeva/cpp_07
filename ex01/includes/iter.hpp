/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 18:41:20 by yuboktae          #+#    #+#             */
/*   Updated: 2023/12/15 11:34:53 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# define RESET "\033[0m"
# define MAGENTA "\033[1;35m"
# define CYAN "\033[1;36m"
# define GREEN "\033[1;32m"

# include <iostream>

template <typename T>
void iter(T *adr, int len, void(*f)(T const &)) {
    if (!adr || !f)
        return ;
    for (int i = 0; i < len; i++)
        f(adr[i]);
}

template <typename T>
void print(T const &x) {
    std::cout << MAGENTA << x << " " << RESET;
}

#endif