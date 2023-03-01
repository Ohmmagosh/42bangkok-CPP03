/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 03:37:40 by psuanpro          #+#    #+#             */
/*   Updated: 2023/03/01 23:18:36 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name), _hit_point(10), _energy_point(10), _attack_dm(0){
	std::cout << "ClapTrap" << this->_name << "Create"<< std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &cp ){
	*this = cp;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap " << this->_name << " Destroy "<< std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &cp){
	if (this != &cp){
		this->_name = cp._name;
		this->_hit_point = cp._hit_point;
		this->_energy_point = cp._energy_point;
		this->_attack_dm = cp._attack_dm;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string &target){
	std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_attack_dm << " points of damage! " << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount){
	if (this->_hit_point <= 0){
		std::cout << "ClapTrap can not take Damage!!!" << std::endl;
		return ;
	}
	this->_hit_point -= amount;
	std::cout << "ClapTrap take Damage "<< amount << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (this->_hit_point <= 0){
		std::cout << "ClapTrap can not be repaired" << std::endl;
		return ;
	}
	this->_hit_point += amount;
	std::cout << "ClapTrap be repaired " << amount << std::endl;
}
