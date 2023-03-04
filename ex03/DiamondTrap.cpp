/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 00:34:12 by psuanpro          #+#    #+#             */
/*   Updated: 2023/03/04 11:14:12 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

DiamondTrap::DiamondTrap( void ): ClapTrap("", 100, 50, 30), ScavTrap(""), FragTrap(""){
	std::cout << "DiamondTrap " << " Create" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): _name(name), ClapTrap(name, 100, 50, 30), ScavTrap(name), FragTrap(name){
	ClapTrap::_name = name.append("_clap_name");
	this->_ep = ScavTrap::_ep;
	this->_hp = FragTrap::_hp;
	this->_atk = FragTrap::_atk;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap " << " Destroy" << std::endl;
}

void	DiamondTrap::whoAmI(){
	std::cout << "Hi am DiamondTrap " << this->_name << std::endl;
	std::cout << "Hi from ClapTrap " << ClapTrap::_name << std::endl;
}

void	DiamondTrap::attack( const std::string &target ){
	ScavTrap::attack( target );
}

int	DiamondTrap::getEp( void ){
	return this->_ep;
}
int	DiamondTrap::getHp( void ){
	return this->_hp;
}
int	DiamondTrap::getAtk( void ){
	return this->_atk;
}


