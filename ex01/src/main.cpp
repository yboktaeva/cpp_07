/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 18:41:06 by yuboktae          #+#    #+#             */
/*   Updated: 2023/12/13 19:33:00 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iter.hpp>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    std::string str[3] = {"hello", "world", "!"};

    std::cout << CYAN << "int array: " << RESET;
    iter(arr, 5, print);
    std::cout << CYAN << "string array: " << RESET;
    iter(str, 3, print);
    return 0;
}

