/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#define _CXXTEST_HAVE_EH
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_ArmyTest_init = false;
#include "ArmyTest.h"

static ArmyTest suite_ArmyTest;

static CxxTest::List Tests_ArmyTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ArmyTest( "ArmyTest.h", 23, "ArmyTest", suite_ArmyTest, Tests_ArmyTest );

static class TestDescription_suite_ArmyTest_testType : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ArmyTest_testType() : CxxTest::RealTestDescription( Tests_ArmyTest, suiteDescription_ArmyTest, 26, "testType" ) {}
 void runTest() { suite_ArmyTest.testType(); }
} testDescription_suite_ArmyTest_testType;

static class TestDescription_suite_ArmyTest_testException : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ArmyTest_testException() : CxxTest::RealTestDescription( Tests_ArmyTest, suiteDescription_ArmyTest, 46, "testException" ) {}
 void runTest() { suite_ArmyTest.testException(); }
} testDescription_suite_ArmyTest_testException;

static class TestDescription_suite_ArmyTest_testSelfAttack : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ArmyTest_testSelfAttack() : CxxTest::RealTestDescription( Tests_ArmyTest, suiteDescription_ArmyTest, 58, "testSelfAttack" ) {}
 void runTest() { suite_ArmyTest.testSelfAttack(); }
} testDescription_suite_ArmyTest_testSelfAttack;

static class TestDescription_suite_ArmyTest_testGetters : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ArmyTest_testGetters() : CxxTest::RealTestDescription( Tests_ArmyTest, suiteDescription_ArmyTest, 66, "testGetters" ) {}
 void runTest() { suite_ArmyTest.testGetters(); }
} testDescription_suite_ArmyTest_testGetters;

static class TestDescription_suite_ArmyTest_testSetters : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ArmyTest_testSetters() : CxxTest::RealTestDescription( Tests_ArmyTest, suiteDescription_ArmyTest, 77, "testSetters" ) {}
 void runTest() { suite_ArmyTest.testSetters(); }
} testDescription_suite_ArmyTest_testSetters;

static class TestDescription_suite_ArmyTest_testHeals : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ArmyTest_testHeals() : CxxTest::RealTestDescription( Tests_ArmyTest, suiteDescription_ArmyTest, 91, "testHeals" ) {}
 void runTest() { suite_ArmyTest.testHeals(); }
} testDescription_suite_ArmyTest_testHeals;

static class TestDescription_suite_ArmyTest_testRogue : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ArmyTest_testRogue() : CxxTest::RealTestDescription( Tests_ArmyTest, suiteDescription_ArmyTest, 102, "testRogue" ) {}
 void runTest() { suite_ArmyTest.testRogue(); }
} testDescription_suite_ArmyTest_testRogue;

static class TestDescription_suite_ArmyTest_testVampire : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ArmyTest_testVampire() : CxxTest::RealTestDescription( Tests_ArmyTest, suiteDescription_ArmyTest, 114, "testVampire" ) {}
 void runTest() { suite_ArmyTest.testVampire(); }
} testDescription_suite_ArmyTest_testVampire;

static class TestDescription_suite_ArmyTest_testWerewolf : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ArmyTest_testWerewolf() : CxxTest::RealTestDescription( Tests_ArmyTest, suiteDescription_ArmyTest, 130, "testWerewolf" ) {}
 void runTest() { suite_ArmyTest.testWerewolf(); }
} testDescription_suite_ArmyTest_testWerewolf;

static class TestDescription_suite_ArmyTest_testWizard : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ArmyTest_testWizard() : CxxTest::RealTestDescription( Tests_ArmyTest, suiteDescription_ArmyTest, 151, "testWizard" ) {}
 void runTest() { suite_ArmyTest.testWizard(); }
} testDescription_suite_ArmyTest_testWizard;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
