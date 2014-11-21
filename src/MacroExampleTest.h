#include <cxxtest/TestSuite.h>

extern int macroExampleMain(int num1, int num2);

class MacroExampleTest : public CxxTest::TestSuite
{

public:
	void setUp() {
	}

	void tearDown(){
	}

	void test_square_0(){
		int num = macroExampleMain(0,0);

		TS_ASSERT_EQUALS(0, num);
	}
	
	void test_square_5_2(){
		int num = macroExampleMain(5, 2);

		TS_ASSERT_EQUALS(49, num);
	}

    void test_square_2_2(){
		int num = macroExampleMain(2, 2);

		TS_ASSERT_EQUALS(16, num);
	}	
};