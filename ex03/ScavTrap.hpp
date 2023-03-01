/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 23:20:51 by psuanpro          #+#    #+#             */
/*   Updated: 2023/03/02 02:08:13 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>

class ScavTrap: virtual public ClapTrap{
	public:
		ScavTrap();
		ScavTrap( std::string name );
		ScavTrap( const ScavTrap &cp );
		ScavTrap& operator=( const ScavTrap &cp );
		~ScavTrap();
		void guardGate();
};

#endif
