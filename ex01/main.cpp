/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 23:19:28 by psuanpro          #+#    #+#             */
/*   Updated: 2023/03/02 00:19:41 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void){
	ScavTrap	demo("hello2");

	demo.attack("hello1");
	demo.takeDamage(50);
	demo.beRepaired(50);
	demo.takeDamage(50);
	demo.takeDamage(50);
	demo.takeDamage(50);
	demo.beRepaired(50);
}
