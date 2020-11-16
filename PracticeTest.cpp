/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_not_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Not a palindrome");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("racecar");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, symbols_not_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("!;;!");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, empty_string_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, space_in_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("bob bob");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, sorted_correctly)
{
    Practice obj;
		int first = 1;
		int second = 2;
		int third = 3;
    obj.sortDescending(first, second, third);
    ASSERT_TRUE(first==3 && second==2 && third==1);
}

TEST(PracticeTest, sorted_incorrectly)
{
    Practice obj;
		int first = 1;
		int second = 2;
		int third = 3;
    obj.sortDescending(first, second, third);
    ASSERT_FALSE(first==1 && second==2 && third==3);
}

TEST(PracticeTest, sorted_dupes_correctly)
{
    Practice obj;
		int first = 0;
		int second = 1;
		int third = 0;
    obj.sortDescending(first, second, third);
    ASSERT_TRUE(first==1 && second==0 && third==0);
}
