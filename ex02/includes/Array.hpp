/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 19:36:32 by yuboktae          #+#    #+#             */
/*   Updated: 2023/12/15 15:01:54 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# define RESET "\033[0m"
# define MAGENTA "\033[1;35m"
# define CYAN "\033[1;36m"

# include <iostream>
# include <exception>
# include <string>
# include <ctime>
# include <cstdlib>

template <typename T>
class Array {
    private:
        unsigned int _n;
        T *_arr;
    public:
        Array();
        Array(unsigned int n);
        Array(const Array &ref);
        ~Array();
        
        Array &operator=(const Array &ref);
        T &operator[](unsigned int idx);
        const T &operator[](unsigned int idx) const;
        unsigned int size() const;

        class OutOfRangeException : public std::exception {
            public:
                virtual const char *what() const throw();
        };
};

#endif

template <typename T>
Array<T>::Array() : _n(0), _arr(NULL) {}

template <typename T>
Array<T>::Array(unsigned int n) : _n(n), _arr(new T[n]) {}

template <typename T>
Array<T>::Array(const Array &ref) : _n(ref._n), _arr(new T[ref._n]) {
    for (unsigned int i = 0; i < ref._n; i++)
        _arr[i] = ref._arr[i];
}

template <typename T>
Array<T>::~Array() {
    if (_arr)
        delete[] _arr;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &ref) {
    if (this == &ref)
        return *this;
    if (_arr)
        delete[] _arr;
    _n = ref._n;
    _arr = new T[ref._n];
    for (unsigned int i = 0; i < ref._n; i++)
        _arr[i] = ref._arr[i];
    return *this;
}

template <typename T>
T &Array<T>::operator[](unsigned int idx) {
    if (idx >= _n)
        throw Array<T>::OutOfRangeException();
    return _arr[idx];
}

template <typename T>
const T &Array<T>::operator[](unsigned int idx) const {
    if (idx >= _n)
        throw Array<T>::OutOfRangeException();
    return _arr[idx];
}

template <typename T>
unsigned int Array<T>::size() const {
    return _n;
}

template <typename T>
const char *Array<T>::OutOfRangeException::what() const throw() {
    return "Out of range";
}