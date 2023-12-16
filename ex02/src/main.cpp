/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 19:36:18 by yuboktae          #+#    #+#             */
/*   Updated: 2023/12/16 18:20:47 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {
    std::cout << "_____________________________________________" << std::endl;
    std::cout << "_____________________TEST1___________________" << std::endl;
    Array<int> arr1(5);
    srand(time(NULL));
    std::cout << CYAN << "First array: " << RESET;
    for (unsigned int i = 0; i < arr1.size(); i++) {
        arr1[i] = rand() % 100;
        std::cout << CYAN << arr1[i] << " " << RESET;
    }
    std::cout << '\n';

    const Array<int> arr2(arr1);
    std::cout << MAGENTA << "Second array: " << RESET;
    for (unsigned int i = 0; i < arr2.size(); i++) {
        std::cout << MAGENTA << arr2[i] << " " << RESET;
    }
    std::cout << '\n';

    std::cout << CYAN << "First array after Random: " << RESET;
    for (unsigned int i = 0; i < arr1.size(); i++) {
        arr1[i] = rand() % 100;
        std::cout << CYAN << arr1[i] << " " << RESET;
    }
    std::cout << '\n';
    std::cout << "_____________________________________________" << std::endl;
    std::cout << "_____________________TEST2___________________" << std::endl;

    Array<std::string> arr3(5);
    arr3[0] = "Hello";
    arr3[1] = "World";
    arr3[2] = "42";

    Array<std::string> arr4(arr3);
    for (unsigned int i = 0; i < arr4.size(); i++) {
        std::cout << MAGENTA << arr4[i] << " " << RESET;
    }
    std::cout << '\n';

    Array<std::string> temp = arr4;
    for (unsigned int i = 0; i < temp.size(); i++) {
        std::cout << CYAN << temp[i] << " " << RESET;
    }
    std::cout << '\n';
    try {
        std::cout << arr4[5] << std::endl;
    }
    catch (std::exception &e) {
        std::cout << RED << e.what() << RESET << std::endl;
    }
    return 0;
}


// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;
//     return 0;
// }