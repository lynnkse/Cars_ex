#include "Bus_t.h"

#define DEFAULT_LINE 0
#define DEFAULT_NUM_OF_SEATS 30

Bus_t::Bus_t():m_numOfSeats(DEFAULT_NUM_OF_SEATS), m_line(DEFAULT_LINE)
{
	SetName(BUS);
	SetType(STANDARD);
	IncrementID();
}

Bus_t::Bus_t(Type_t _type, int _capacity, int _numOfSeats):Car_t(_capacity), m_numOfSeats(_numOfSeats), m_line(DEFAULT_LINE)
{
	SetName(BUS);
	SetType(_type);
	IncrementID();
}

Bus_t::Bus_t(const Bus_t& _bus):Car_t(_bus), m_numOfSeats(_bus.m_numOfSeats), m_line(_bus.m_line)
{
	IncrementID();
}

Bus_t::~Bus_t()
{}

int Bus_t::GetLine() const
{
	return m_line;
}

void Bus_t::SetLine(int _line)
{
	m_line = _line;
}

int Bus_t::GetNumOfSeats() const
{
	return m_numOfSeats;
}

void Bus_t::SetNumOfSeats(int _numOfSeats)
{
	m_numOfSeats = _numOfSeats;
}

void Bus_t::operator=(const Bus_t& _bus)
{
	Car_t::operator=(_bus);
	m_numOfSeats = _bus.GetNumOfSeats();
	m_line = _bus.GetLine();
}































