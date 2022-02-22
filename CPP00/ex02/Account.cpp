/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:45:37 by mde-figu          #+#    #+#             */
/*   Updated: 2022/02/22 10:10:13 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>
#include <sstream>

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
		_displayTimestamp();
		std::cout << "index:" << _accountIndex;
		std::cout << ";amount:" << _amount;
		std::cout << ";created" << std::endl;
	_nbAccounts++;
	_totalAmount = _totalAmount + _amount;
	}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";closed" << std::endl; // closed é status?
}

int	Account::getNbAccounts(void) {return _nbAccounts;}

int	Account::getTotalAmount(void) {return _totalAmount;}

int Account::getNbDeposits(void) {return _totalNbDeposits;}

int Account::getNbWithdrawals(void) {return _totalNbWithdrawals;}

void Account::displayAccountsInfos( void ) 
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts();
	std::cout << ";total:" << getTotalAmount();
	std::cout << ";deposits:" << getNbDeposits();
	std::cout << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_nbDeposits++;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount;
	std::cout << ";deposits:" << deposit;
	_amount = _amount + deposit;
	std::cout << ";amount:" << _amount;
	std::cout << ";nb_deposits:" << _nbDeposits << std::endl;
	_totalAmount = _totalAmount + deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount;
	if ( withdrawal >= _amount)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return false;
	}
	else
	{
		_amount = _amount - withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
	}
	std::cout << ";amount:" <<_amount;
	std::cout << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	_totalAmount = _totalAmount - withdrawal;
	return true;
}

int		Account::checkAmount( void ) const {return 0;}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";deposits:" << _nbDeposits;
	std::cout << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
	time_t		timer;
	struct tm	*epoch;

	time(&timer);
	epoch = localtime(&timer);
	std::cout << "[";
	std::cout << epoch->tm_year + 1900;
	std::cout << std::setfill ('0') << std::setw(2);
	std::cout << epoch->tm_mon;
	std::cout << epoch->tm_mday << "_";
	std::cout << std::setfill ('0') << std::setw(2);
	std::cout << epoch->tm_hour;
	std::cout << epoch->tm_min;
	std::cout << epoch->tm_sec;
	std::cout << "]";
}


