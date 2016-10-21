#include "Car_t.h"

#define INITIAL_ID 1
#define DEF_CAPACITY 2000

int Car_t::m_nextID = INITIAL_ID;

Car_t::Car_t():m_type(NOT_SET), m_capacity(DEF_CAPACITY), m_id(m_nextID), m_name(NOT_YET_SET)
{
	IncrementID();
}

Car_t::Car_t(int _capacity):m_type(NOT_SET), m_capacity(_capacity), m_id(m_nextID), m_name(NOT_YET_SET)
{
	IncrementID();
}

Car_t::Car_t(const Car_t& _car):m_type(_car.m_type), m_capacity(_car.m_capacity), m_id(m_nextID), m_name(_car.m_name)
{
	IncrementID();
}

Car_t::~Car_t()
{}

void Car_t::SetType(Type_t _type)
{
	if(m_type == NOT_SET)
	{
		m_type = _type;
	}
}

void Car_t::SetName(Name_t _name)
{
	if(m_name == NOT_YET_SET)
	{
		m_name = _name;
	}
}

void Car_t::operator=(const Car_t& _car)
{
	m_capacity = _car.m_capacity;
	m_type = _car.m_type;
}

void Car_t::IncrementID()
{
	++m_nextID;
}

int Car_t::GetCapacity() const
{
	return m_capacity;
}

Type_t Car_t::GetType() const
{
	return m_type;
}

bool Car_t::operator<(const Car_t& _car) const
{
	return m_capacity < _car.m_capacity;
}

bool Car_t::Compare(const Car_t& _car) const
{
	return m_name == _car.m_name;
}



















