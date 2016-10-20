#ifndef __PRIVATE_H__
#define __PRIVATE_H__

#include "Car_t.h"

class Private_t : public Car_t
{
	public:
		Private_t();
		Private_t(Type_t _type, int _capacity);
		Private_t(const Private_t& _private);
		~Private_t();
		
		int GetSpeed() const;
		void Accelerate();
		void Break();
	private:
		int m_speed;
};

#endif //__PRIVATE_H__
