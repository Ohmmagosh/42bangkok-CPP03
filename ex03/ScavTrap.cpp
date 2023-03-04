/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 23:20:45 by psuanpro          #+#    #+#             */
/*   Updated: 2023/03/04 01:53:36 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"


ScavTrap::ScavTrap(std::string name): ClapTrap(name, 100, 50, 20){
	std::cout << "ScavTrap "<< this->_name << " Create" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &cp ): ClapTrap(cp){}

ScavTrap& ScavTrap::operator=( const ScavTrap &cp ) {
	if (this != &cp){
		this->_name = cp._name;
		this->_hp = cp._hp;
		this->_ep = cp._ep;
		this->_atk = cp._atk;
	}
	return (*this);
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap " << this->_name << " Destroy "<< std::endl;
}

void	ScavTrap::guardGate(){
	std::cout << "Noob!!!" << std::endl;
}

void	ScavTrap::attack(const std::string &target) {
	std::cout << "ScavTrap " << this->_name << " attacks " << target << " causing " << this->_atk << " points of damage! " << std::endl;
}
