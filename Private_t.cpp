#include "Private_t.h"

#define INITIAL_SPEED 0
#define ACCELERATION 10
#define DECELERATION 10

Private_t::Private_t():m_speed(INITIAL_SPEED)
{
	SetName(PRIVATE);
	SetType(STANDARD);
	IncrementID();
}

Private_t::Private_t(Type_t _type, int _capacity):Car_t(_capacity), m_speed(INITIAL_SPEED)
{
	SetName(PRIVATE);
	SetType(_type);
	IncrementID();
}

Private_t::Private_t(const Private_t& _private):Car_t(_private), m_speed(_private.m_speed)
{
	IncrementID();
}

Private_t::~Private_t()
{}

int Private_t::GetSpeed() const
{
	return m_speed;
}

void Private_t::Accelerate()
{
	m_speed += ACCELERATION;
}

void Private_t::Break()
{
	m_speed = (m_speed > DECELERATION ? m_speed - DECELERATION : 0);
}



























