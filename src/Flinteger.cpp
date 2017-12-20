/*
 * Flinteger.cpp
 *
 *  Created on: Oct 17, 2017
 *      Author: owner
 */

#include "Flinteger.hpp"

std::ostream& operator << (std::ostream &os,const Flinteger &right)
{
	os << right.value;
	return os;
}

void Flinteger::operator= (const Flinteger &right)
{
	this->value = right.value;
}

void Flinteger::operator= (int val)
{
	this->value=val;
}

Flinteger Flinteger::operator +(const Flinteger &right)
{
	Flinteger temp;
	temp.value = this->value + right.value;
	return temp;
}

Flinteger Flinteger::operator+ (int val)
{
	Flinteger temp;
	temp.value = this->value+val;
	return temp;
}

Flinteger Flinteger::operator -(const Flinteger &right)
{
	Flinteger temp;
	temp.value = this->value - right.value;
	return temp;
}

Flinteger Flinteger::operator - (int val)
{
	Flinteger temp;
	temp.value = this->value-val;
	return temp;
}

Flinteger Flinteger::operator *(const Flinteger &right)
{
	Flinteger temp;
	temp.value = this->value * right.value;
	return temp;
}

Flinteger Flinteger::operator * (int val)
{
	Flinteger temp;
	temp.value = this->value*val;
	return temp;
}

Flinteger Flinteger::operator /(const Flinteger &right)
{
	Flinteger temp;
	temp.value = this->value / right.value;
	return temp;
}

Flinteger Flinteger::operator / (int val)
{
	Flinteger temp;
	temp.value = this->value/val;
	return temp;
}

Flinteger Flinteger::operator %(const Flinteger &right)
{
	Flinteger temp;
	temp.value = this->value % right.value;
	return temp;
}

Flinteger Flinteger::operator % (int val)
{
	Flinteger temp;
	temp.value = this->value%val;
	return temp;
}

void Flinteger::operator +=(const Flinteger &right)
{

	this->value+=right.value;
}
void Flinteger::operator +=(int val)
{
	this->value+=val;
}

void Flinteger::operator -=(const Flinteger &right)
{

	this->value-=right.value;
}
void Flinteger::operator -=(int val)
{
	this->value-=val;
}

void Flinteger::operator *=(const Flinteger &right)
{

	this->value*=right.value;
}
void Flinteger::operator *=(int val)
{
	this->value*=val;
}

void Flinteger::operator /=(const Flinteger &right)
{

	this->value/=right.value;
}
void Flinteger::operator /=(int val)
{
	this->value/=val;
}

void Flinteger::operator %=(const Flinteger &right)
{

	this->value%=right.value;
}
void Flinteger::operator %=(int val)
{
	this->value%=val;
}

bool Flinteger::operator <(const Flinteger &right)
{
	if (this->value<right.value)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Flinteger::operator <(int val)
{
	if (this->value<val)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Flinteger::operator <=(const Flinteger &right)
{
	if (this->value<=right.value)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Flinteger::operator <=(int val)
{
	if (this->value<=val)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Flinteger::operator >(const Flinteger &right)
{
	if (this->value>right.value)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Flinteger::operator >(int val)
{
	if (this->value>val)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Flinteger::operator >=(const Flinteger &right)
{
	if (this->value>=right.value)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Flinteger::operator >=(int val)
{
	if (this->value>=val)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Flinteger::operator ==(const Flinteger &right)
{
	if (this->value==right.value)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Flinteger::operator ==(int val)
{
	if (this->value==val)
	{
		return true;
	}
	else
	{
		return false;
	}
}


int Flinteger::operator ++(int)
{
	this->value++;
	return this->value;
}

int Flinteger::operator --(int)
{
	this->value--;
	return this->value;
}

Flinteger::Flinteger()
{
	// TODO Auto-generated constructor stub
	value = 0;
}

Flinteger::Flinteger(int val)
{
	// TODO Auto-generated constructor stub
	value = val;
}

Flinteger::~Flinteger() {
	// TODO Auto-generated destructor stub
}

