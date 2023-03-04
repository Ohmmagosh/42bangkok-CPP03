/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 00:23:03 by psuanpro          #+#    #+#             */
/*   Updated: 2023/03/04 01:42:16 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void){
	DiamondTrap demo("hello4");

	demo.whoAmI();
	demo.takeDamage(1);
	demo.attack("target");
	demo.takeDamage(10);

}
