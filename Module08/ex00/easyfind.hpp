/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysensoy <ysensoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:26:26 by yasinsensoy       #+#    #+#             */
/*   Updated: 2023/02/22 11:47:22 by ysensoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

template < typename T >
int easyFinder(T &container, int y)
{
    std::vector<int>::iterator it;

    it = std::find(container.begin(), container.end(), y);
    if (it != container.end())
    {
        std::cout << *it << std::endl;
        return (0);
    }
    else
    {
        std::cerr << "\033[1;91mElement Didn't Find\033[0m" << std::endl;
        return (-1);
    }
}

#endif