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
	ASSERT_THAT(b1.GetNumOfSeats() == 30);
	ASSERT_THAT(b1.GetLine() == 0);
END_UNIT

UNIT(BUS_CTOR)
	Bus_t b1(AUTOMATIC, 3000, 50);
	ASSERT_THAT(b1.GetNumOfSeats() == 50);
	ASSERT_THAT(b1.GetLine() == 0);
	ASSERT_THAT(b1.GetCapacity() == 3000);
END_UNIT

UNIT(BUS_COPY_CTOR)
	Bus_t b1(AUTOMATIC, 3000, 50);
	Bus_t b2(b1);
	ASSERT_THAT(b2.GetNumOfSeats() == 50);
	ASSERT_THAT(b2.GetLine() == 0);
	ASSERT_THAT(b2.GetCapacity() == 3000);
END_UNIT

UNIT(PRIVATE_CTOR)
	Private_t p1(AUTOMATIC, 1500);
	ASSERT_THAT(p1.GetType() == AUTOMATIC);
	ASSERT_THAT(p1.GetCapacity() == 1500);
END_UNIT

UNIT(PRIVATE_COPY_CTOR)
	Private_t p1(AUTOMATIC, 1500);
	Private_t p2(p1);
	ASSERT_THAT(p2.GetCapacity() == 1500);
	ASSERT_THAT(p2.GetType() == AUTOMATIC);
END_UNIT

UNIT(PRIVATE_SPEED)
	Private_t p1(AUTOMATIC, 1500);
	p1.Accelerate();
	p1.Accelerate();
	p1.Break();
	ASSERT_THAT(p1.GetSpeed() == 10);
END_UNIT

UNIT(LESS_THEN)
	Private_t p1(AUTOMATIC, 1500);
	Private_t p2(AUTOMATIC, 1600);
	Bus_t b1(AUTOMATIC, 3000, 50);
	Bus_t b2(AUTOMATIC, 1000, 50);
	ASSERT_THAT(b2 < p1);
	ASSERT_THAT(p2 < b1);
	ASSERT_THAT(p1 < p2);
	ASSERT_THAT(b2 < b1);
END_UNIT

UNIT(EQ2)
	Private_t p1(AUTOMATIC, 1500);
	Private_t p2 = p1;
	ASSERT_THAT(p1.GetCapacity() == p2.GetCapacity());
END_UNIT

UNIT(ASSIGN_PRVT)
	Private_t p1(AUTOMATIC, 1500);
	Private_t p2(AUTOMATIC, 2000);
	p1.Accelerate();
	p2 = p1;
	ASSERT_THAT(p1.GetCapacity() == p2.GetCapacity());
	ASSERT_THAT(p1.GetSpeed() == p2.GetSpeed());
END_UNIT

UNIT(ASSIGN_BUS)
	Bus_t b1(AUTOMATIC, 3000, 50);
	Bus_t b2;
	b1.SetLine(500);
	b2 = b1;
	ASSERT_THAT(b1.GetLine() == b2.GetLine());
	ASSERT_THAT(b1.GetCapacity() == b2.GetCapacity());
END_UNIT

UNIT(COMPARE)
	Bus_t b1;
	Bus_t b2;
	Private_t p1;
	Private_t p2;
	ASSERT_THAT(p1.Compare(p2));
	ASSERT_THAT(b1.Compare(b2));
	ASSERT_THAT(!p1.Compare(b1));
	ASSERT_THAT(!b1.Compare(p1)); 
END_UNIT

TEST_SUITE(Cars test)
	TEST(PRIVATE_DEF_CTOR)
	TEST(BUS_DEF_CTOR)
	TEST(PRIVATE_CTOR)
	TEST(PRIVATE_COPY_CTOR)
	TEST(BUS_CTOR)
	TEST(BUS_COPY_CTOR)
	TEST(PRIVATE_SPEED)
	TEST(LESS_THEN)
	TEST(EQ2)
	TEST(ASSIGN_PRVT)
	TEST(ASSIGN_BUS)
	TEST(COMPARE)
END_SUITE



















































































