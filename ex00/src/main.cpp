/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:45:33 by yuboktae          #+#    #+#             */
/*   Updated: 2023/12/13 18:40:20 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <whatever.hpp>

class Test {
    private:
        int _n;
    public:
        Test(): _n(0) {}
        Test(int n) : _n(n) {}
        Test(const Test &other) { *this = other; }
        Test &operator=(const Test &other) { _n = other._n; return *this; }
        ~Test() {}
        int get_n() const { return _n; }

        bool operator==(Test const & rhs) const { return _n == rhs._n;}
        bool operator!=(Test const & rhs) const { return _n != rhs._n;}
        bool operator>(Test const & rhs) const  { return _n > rhs._n;}
        bool operator<(Test const & rhs) const { return _n < rhs._n;}
        bool operator>=(Test const & rhs) const { return _n >= rhs._n;}
        bool operator<=(Test const & rhs) const { return _n <= rhs._n;}
};

std::ostream &operator<<(std::ostream &out, const Test &t) {
    out << t.get_n();
    return out;
}

int main() {
	Test a(42), b(21);

    swap(a, b);
    std::cout << GREEN << a << "<->" << b << RESET << std::endl;
    std::cout << CYAN << "MAX is -> " << max(a, b) << RESET << std::endl;
    std::cout << MAGENTA << "MIN is " << min(a, b) << RESET << std::endl;
    return 0;
}

// or this snippet from ex00/src/main.cpp:
/*int main( void ) {
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;
}*/