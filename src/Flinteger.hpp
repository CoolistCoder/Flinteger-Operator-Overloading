/*
 * Flinteger.hpp
 *
 *  Created on: Oct 17, 2017
 *      Author: owner
 */

#ifndef FLINTEGER_HPP_
#define FLINTEGER_HPP_
#include <cstdint>
#include <ostream>

class Flinteger
{
private:
	signed long value;

public:

	friend std::ostream& operator << (std::ostream&,const Flinteger &right);
	void operator = (const Flinteger &right);
	void operator = (int);
	Flinteger operator + (const Flinteger &right);
	Flinteger operator + (int);
	Flinteger operator - (const Flinteger &right);
	Flinteger operator - (int);
	Flinteger operator * (const Flinteger &right);
	Flinteger operator * (int);
	Flinteger operator / (const Flinteger &right);
	Flinteger operator / (int);
	Flinteger operator % (const Flinteger &right);
	Flinteger operator % (int);

	void operator +=(const Flinteger &right);
	void operator +=(int);
	void operator -=(const Flinteger &right);
	void operator -=(int);
	void operator *=(const Flinteger &right);
	void operator *=(int);
	void operator /=(const Flinteger &right);
	void operator /=(int);
	void operator %=(const Flinteger &right);
	void operator %=(int);

	bool operator <(const Flinteger &right);
	bool operator <(int);
	bool operator <=(const Flinteger &right);
	bool operator <=(int);
	bool operator >(const Flinteger &right);
	bool operator >(int);
	bool operator >=(const Flinteger &right);
	bool operator >=(int);
	bool operator ==(const Flinteger &right);
	bool operator ==(int);

	int operator ++(int);
	int operator --(int);
	//unfinished but whatevs



	Flinteger();
	Flinteger(int);
	virtual ~Flinteger();
};

#endif /* FLINTEGER_HPP_ */
