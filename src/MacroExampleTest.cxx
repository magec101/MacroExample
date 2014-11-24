/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/XmlPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::XmlPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::XmlPrinter >( tmp, argc, argv );
    return status;
}
bool suite_MacroExampleTest_init = false;
#include "/var/www/html/codeit/faculty/workspace/MacroExample/src/MacroExampleTest.h"

static MacroExampleTest suite_MacroExampleTest;

static CxxTest::List Tests_MacroExampleTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_MacroExampleTest( "/var/www/html/codeit/faculty/workspace/MacroExample/src/MacroExampleTest.h", 5, "MacroExampleTest", suite_MacroExampleTest, Tests_MacroExampleTest );

static class TestDescription_suite_MacroExampleTest_test_square_0 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MacroExampleTest_test_square_0() : CxxTest::RealTestDescription( Tests_MacroExampleTest, suiteDescription_MacroExampleTest, 15, "test_square_0" ) {}
 void runTest() { suite_MacroExampleTest.test_square_0(); }
} testDescription_suite_MacroExampleTest_test_square_0;

static class TestDescription_suite_MacroExampleTest_test_square_5_2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MacroExampleTest_test_square_5_2() : CxxTest::RealTestDescription( Tests_MacroExampleTest, suiteDescription_MacroExampleTest, 21, "test_square_5_2" ) {}
 void runTest() { suite_MacroExampleTest.test_square_5_2(); }
} testDescription_suite_MacroExampleTest_test_square_5_2;

static class TestDescription_suite_MacroExampleTest_test_square_2_2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MacroExampleTest_test_square_2_2() : CxxTest::RealTestDescription( Tests_MacroExampleTest, suiteDescription_MacroExampleTest, 27, "test_square_2_2" ) {}
 void runTest() { suite_MacroExampleTest.test_square_2_2(); }
} testDescription_suite_MacroExampleTest_test_square_2_2;

static class TestDescription_suite_MacroExampleTest_test_square_5_6 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MacroExampleTest_test_square_5_6() : CxxTest::RealTestDescription( Tests_MacroExampleTest, suiteDescription_MacroExampleTest, 33, "test_square_5_6" ) {}
 void runTest() { suite_MacroExampleTest.test_square_5_6(); }
} testDescription_suite_MacroExampleTest_test_square_5_6;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
