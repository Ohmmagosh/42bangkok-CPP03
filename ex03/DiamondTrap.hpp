/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 00:28:41 by psuanpro          #+#    #+#             */
/*   Updated: 2023/03/02 02:23:26 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
#include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap{
	private:
		std::string	_name;
	public:
		DiamondTrap();
		DiamondTrap( std::string name );
		DiamondTrap( const DiamondTrap &cp );
		DiamondTrap& operator=( const DiamondTrap &cp );
		~DiamondTrap();
		void	whoAmI();
};
#endif
