/// @file test_calculator.c

#include "unity.h"
#include "calculator.h"

	void setUp()
	{	}
	void tearDown()
	{	}

	void test_cal(void)
	{

    //Declaration of function pointer
    int (*pfAddTwoNumber)(int,int) = NULL;
    int (*pfSubTwoNumber)(int,int) = NULL;
    //initialize the function pointer
    pfAddTwoNumber = add;
    pfSubTwoNumber= sub;


  		TEST_ASSERT_EQUAL(30,(*pfAddTwoNumber)(10,20));
  		TEST_ASSERT_EQUAL(-10,(*pfSubTwoNumber)(10,20));
	}

	/**
	* Main entry to the test function
	*/
	int test_main(void)
	{
	  	UNITY_BEGIN();

	  	RUN_TEST(test_cal);

  		return UNITY_END();
	}
