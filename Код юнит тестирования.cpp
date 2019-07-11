#include <UnitTest++/UnitTest++.h>
#include "LicCheck.h"
TEST(UserName) 
{
	CHECK_EQUAL(true,KeyChecker().keyCheck("Nesterov", "e10dc11e20281b3c732116bfaebc8adf"));
	CHECK_EQUAL(true,KeyChecker().keyCheck("Nes7er0v", "5aa532ca0d6556265231b2b43998e451"));
	CHECK_EQUAL(true,KeyChecker().keyCheck("���7��0�", "1baf5444c536f3424d06e7bce641c269"));
	CHECK_EQUAL(true,KeyChecker().keyCheck("��s7er0�_����", "fef05e6a4735e12c7fb7588cf3e26eec"));
}
TEST(TestKey)
{
	CHECK_EQUAL(true,KeyChecker().keyCheck("Nesterov", "e10dc11e20281b3c732116bfaebc8adf"));
	CHECK_EQUAL(false,KeyChecker().keyCheck("Nesterov", "e10dc11e20281b"));
	CHECK_THROW(KeyChecker().keyCheck("Nesterov", "e10��11e20281�3c732116��ae��8a��"), int);
}
TEST(FuncMD5)
{
CHECK_EQUAL("c835ba6f9401329effc49f482c31e009",md5("Nesterov"));
CHECK_EQUAL("f19d5e97df949f9b71e183dc36409485",md5("Nes7er0v"));
CHECK_EQUAL("c511cf1db5b2b7543126ae1e61a13e04",md5("���7��0�"));
CHECK_EQUAL("fc0b0ed223603adc8b93236f78925b3c",md5("��s7er0�_����"));
}
int main(int argc, char **argv)
{
	return UnitTest::RunAllTests();
}