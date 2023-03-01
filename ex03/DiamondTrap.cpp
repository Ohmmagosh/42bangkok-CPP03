/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 00:34:12 by psuanpro          #+#    #+#             */
/*   Updated: 2023/03/02 02:43:24 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

DiamondTrap::DiamondTrap( void ): ScavTrap(""), FragTrap(""), ClapTrap(""){
	std::cout << "DiamondTrap " << " Create" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): _name(name), ScavTrap(name), ClapTrap(name), FragTrap(name){
	std::cout << "this-> " << this->_hp << std::endl;
	ClapTrap::_name = name.append("_clap_name");
	//FragTrap::_hp = 100;
	//ScavTrap::_ep = 50;
	//FragTrap::_atk = 30;
	std::cout << "this->_ep " << this->_ep << std::endl;
	std::cout << ClapTrap::_name << std::endl;
	std::cout << "DiamondTrap " << " Create" << std::endl;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap " << " Destroy" << std::endl;
}




