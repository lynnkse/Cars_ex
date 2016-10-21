#ifndef __BUS_H__
#define __BUS_H__

#include "Car_t.h"

class Bus_t : public Car_t
{
	public:
		Bus_t();
		Bus_t(Type_t _type, int _capacity, int _numOfSeats);
		Bus_t(const Bus_t& _bus);
		~Bus_t();
		
		void operator=(const Bus_t& _bus);
		int GetLine() const;
		void SetLine(int _line);
		int GetNumOfSeats() const;
		void SetNumOfSeats(int _numOfSeats);
	private:
		int m_numOfSeats;
		int m_line;
};

#endif //__BUS_H__
