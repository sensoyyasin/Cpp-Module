/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysensoy <ysensoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:26:08 by yasinsensoy       #+#    #+#             */
/*   Updated: 2023/02/22 17:20:40 by ysensoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    try
    {
        Span span(5);
        span.addNumber(6);
        span.addNumber(3);
        span.addNumber(17);
        span.addNumber(9);
        span.addNumber(10);
        //span.addNumbers(2);
        //span.addNumber(11);
        std::cout << "minimum difference: " << span.shortestSpan() << std::endl;
        std::cout << "maximum difference: " << span.longestSpan() << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    // try
    // {
    //     std::vector<int> v(10000);
    //     std::srand(time(0));
    //     std::generate(v.begin(), v.end(), std::rand);

    //     Span span(v.size());
    //     span.addNumbers(v.begin(), v.end());

    //     unsigned long i = 0;
    //     std::vector<int> temp = span.getVector();
    //     while (i < temp.size())
    //     {
    //         std::cout << temp.at(i) << std::endl;
    //         i++;
    //     }
    //     std::cout << "minimum difference: " << span.shortestSpan() << std::endl;
    //     std::cout << "maximum difference: " << span.longestSpan() << std::endl;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    return (0);
}