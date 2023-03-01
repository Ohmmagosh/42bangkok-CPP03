/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 00:08:17 by psuanpro          #+#    #+#             */
/*   Updated: 2023/03/02 00:16:17 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap: public ClapTrap{
	public:
		FragTrap( std::string name );
		FragTrap( const FragTrap &cp );
		FragTrap& operator=( const FragTrap &cp );
		~FragTrap( void );
		void	highFivesGuys( void );
};

#endif
