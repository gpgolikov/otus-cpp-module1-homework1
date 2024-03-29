#define BOOST_TEST_MODULE helloworld_test_module

#include "version.h"
#include "info.h"

#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(helloworld_test_suite)

BOOST_AUTO_TEST_CASE(helloworld_test_version)
{
    BOOST_CHECK(version() == PROJECT_VERSION_PATCH);
}

BOOST_AUTO_TEST_SUITE_END()
