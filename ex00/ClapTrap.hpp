/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 03:37:58 by psuanpro          #+#    #+#             */
/*   Updated: 2023/03/01 23:11:56 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
	private:
		std::string		_name;
		int				_hit_point;
		int				_energy_point;
		int				_attack_dm;
	public:
		ClapTrap(std::string name);
		ClapTrap( const ClapTrap &cp );
		ClapTrap& operator=( const ClapTrap &cp);
		~ClapTrap();
		void	attack( const std::string& target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );
};
#endif
