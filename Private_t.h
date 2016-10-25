#ifndef __PRIVATE_H__
#define __PRIVATE_H__

#include "Car_t.h"

class Private_t : public Car_t
{
	public:
		Private_t(); //creates car with all default values
		Private_t(Type_t _type, int _capacity); //creates car with given gear type and capacity
		Private_t(const Private_t& _private); //copy constructor
		~Private_t();
		
		int GetSpeed() const;
		void Accelerate(); //increases speed by 10 kph
		void Break(); //decreases speed by 10 kph
	private:
		int m_speed;
};

#endif //__PRIVATE_H__
