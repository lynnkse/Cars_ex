#include "mu_test.h"
#include "Car_t.h"
#include "Private_t.h"
#include "Bus_t.h"

UNIT(PRIVATE_DEF_CTOR)
	Private_t p1;
	ASSERT_THAT(p1.GetSpeed() == 0);
END_UNIT

UNIT(BUS_DEF_CTOR)
	Bus_t b1;
	ASSERT_THAT(b1.GetNumOfSeats == 30);
	ASSERT_THAT(b1.GetLine == 0);
END_UNIT

TEST_SUITE(Cars test)
	TEST(PRIVATE_DEF_CTOR)
	TEST(BUS_DEF_CTOR)
END_SUITE
