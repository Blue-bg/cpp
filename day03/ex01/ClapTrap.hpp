/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:17:42 by amiguez           #+#    #+#             */
/*   Updated: 2022/12/08 14:53:05 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_HPP__
# define __CLAPTRAP_HPP__

# include <iostream>

class ClapTrap{

	private:
		std::string	_name;
		unsigned int	_hitPoint;
		unsigned int	_nrgPoint;
		unsigned int	_atkPoint;

	public:
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & src);
		~ClapTrap();

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		std::string getName() const;
		unsigned int getHitPoint() const;
		unsigned int getNrgPoint() const;
		unsigned int getAtkPoint() const;
		
		void setName(std::string name);
		void setHitPoint(unsigned int hitPoint);
		void setNrgPoint(unsigned int nrgPoint);
		void setAtkPoint(unsigned int atkPoint);
};

#endif
