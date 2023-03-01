/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 00:08:26 by psuanpro          #+#    #+#             */
/*   Updated: 2023/03/02 00:19:08 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void){
	FragTrap	demo("hello3");

	demo.attack("hello1");
	demo.takeDamage(50);
	demo.beRepaired(50);
	demo.takeDamage(50);
	demo.takeDamage(50);
	demo.takeDamage(50);
	demo.beRepaired(50);
	demo.highFivesGuys();
}
