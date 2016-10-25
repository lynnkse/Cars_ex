#ifndef __BUS_H__
#define __BUS_H__

#include "Car_t.h"

class Bus_t : public Car_t
{
	public:
		Bus_t(); //creates bus with all default values
		Bus_t(Type_t _type, int _capacity, int _numOfSeats); //creates bus with given gear type, capacity and numOfSeats
		Bus_t(const Bus_t& _bus); //copy constructor
		~Bus_t();
		
		int GetLine() const;
		void SetLine(int _line);
		int GetNumOfSeats() const;
		void SetNumOfSeats(int _numOfSeats);
	private:
		int m_numOfSeats;
		int m_line;
};

#endif //__BUS_H__
