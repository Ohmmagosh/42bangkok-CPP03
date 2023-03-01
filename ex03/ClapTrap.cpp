/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 03:37:40 by psuanpro          #+#    #+#             */
/*   Updated: 2023/03/02 00:07:42 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name), _hp(10), _ep(10), _atk(0){
	std::cout << "ClapTrap " << this->_name << " Create"<< std::endl;
}

ClapTrap::ClapTrap(std::string name, int hp, int ep, int atk): _name(name), _hp(hp), _ep(ep), _atk(atk){
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
		this->_hp = cp._hp;
		this->_ep = cp._ep;
		this->_atk = cp._atk;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string &target){
	std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_atk << " points of damage! " << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount){
	if (this->_hp <= 0){
		std::cout << "ClapTrap can not take Damage!!!" << std::endl;
		return ;
	}
	this->_hp -= amount;
	std::cout << "ClapTrap take Damage "<< amount << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (this->_hp <= 0){
		std::cout << "ClapTrap can not be repaired" << std::endl;
		return ;
	}
	this->_hp += amount;
	std::cout << "ClapTrap be repaired " << amount << std::endl;
}
