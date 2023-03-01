/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 00:08:19 by psuanpro          #+#    #+#             */
/*   Updated: 2023/03/02 00:22:03 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name, 100, 100, 30){
	std::cout << "FragTrap "<< this->_name << " Create" << std::endl;
}

FragTrap::FragTrap( const FragTrap &cp ): ClapTrap(cp){}

FragTrap& FragTrap::operator=( const FragTrap &cp) {
	if (this != &cp){
		this->_name = cp._name;
		this->_hp = cp._hp;
		this->_ep = cp._ep;
		this->_atk = cp._atk;
	}
	return (*this);
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap " << this->_name << " Destroy "<< std::endl;
}

void	FragTrap::highFivesGuys( void ){
	std::cout << " HIGH FIVES!!! " << std::endl;
}
