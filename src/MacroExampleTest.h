#include <cxxtest/TestSuite.h>

extern const char* macroExampleMain(int argc, char** argv);

class MacroExampleTest : public CxxTest::TestSuite
{

public:
	void setUp() {
	}

	void tearDown(){
	}

	void test_SimpleIOCompare(){
		char* argv[] = {};
		const char* message = macroExampleMain(sizeof(argv), argv);

		TS_ASSERT_EQUALS("Hello world\n", message);
	}
	
};