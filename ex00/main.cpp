/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 03:36:43 by psuanpro          #+#    #+#             */
/*   Updated: 2023/03/01 23:19:01 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void){
	ClapTrap demo("hello");

	demo.attack("hello2");
	demo.takeDamage(5);
	demo.beRepaired(5);
	demo.takeDamage(5);
	demo.takeDamage(5);
	demo.takeDamage(5);
	demo.beRepaired(5);




}
