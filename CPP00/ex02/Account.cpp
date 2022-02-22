/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:45:37 by mde-figu          #+#    #+#             */
/*   Updated: 2022/02/22 07:54:43 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts=0;
int Account::_totalAmount=0;
int Account::_totalNbDeposits=0;
int Account::_totalNbWithdrawals=0;

Account::Account( void ):
	_accountIndex(0),
	_amount(0),
	_nbDeposits(0),
	_nbWithdrawals(0){}

Account::Account(int initial_deposit):
	_accountIndex(_nbAccounts),
	_amount(initial_deposit),
	_nbDeposits(0),
	_nbWithdrawals(0){
		std::cout << "timestamp ";
		std::cout << "index:" << _accountIndex;
		std::cout << ";amount:" << _amount;
		std::cout << ";created" << std::endl;
	_nbAccounts++;
	_totalAmount = _totalAmount + _amount;
	}

Account::~Account(void) {}

int	Account::getNbAccounts(void) {return 0;}

int	Account::getTotalAmount(void) {return 0;}

int Account::getNbDeposits(void) {return 0;}

int Account::getNbWithdrawals(void) {return 0;}

void Account::displayAccountsInfos( void ) 
{
	std::cout << "accounts:" << _nbAccounts;
	std::cout << ";total:" << _totalAmount;
	std::cout << ";deposits:" << _totalNbDeposits;
	std::cout << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout << "timestamp ";
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount;
	std::cout << ";deposits:" << deposit;
	_amount = _amount + deposit;
	std::cout << ";amount:" << _amount;
	std::cout << ";nb_deposits:" << _nbDeposits << std::endl;
	_totalAmount = _totalAmount + _amount;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	(void )withdrawal;
	return true;
}

int		Account::checkAmount( void ) const {return 0;}

void	Account::displayStatus( void ) const
{
	std::cout << "timestamp ";
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";deposits:" << _nbDeposits;
	std::cout << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void ) {}


