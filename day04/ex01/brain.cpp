/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 17:06:42 by amiguez           #+#    #+#             */
/*   Updated: 2023/01/17 19:32:37 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain constructor called" << std::endl;
	return ;
}

Brain::Brain(Brain const & src)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
	return ;
}

Brain &Brain::operator=(Brain const &rhs)
{
	this->ideas = rhs.ideas;
}

/*****************************************/
/*****************************************/

std::string Brain::getIdea(int i) const{
	return (ideas[i]);
}

void Brain::setIdea(int i, std::string& idea){
	ideas[i] = idea;
}