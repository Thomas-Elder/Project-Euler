/* test.c */

#include "test.h"

int main(void)
{
	/* local variables */
	int i;
	int results[8];

	for (i = 0; i < 8; i++)
		results[i] = 1;

	printf("\n");
	printf("%s\n", "Welcome to testing for Tom's Project Euler solutions!");
	print_directory();

	printf("%s\n", "List of problems to test:");
	printf("%s\n", "1 - Multiples of 3 and 5");
	printf("%s\n", "2 - Even Fibonacci numbers");
	printf("%s\n", "3 - Largest Prime factor");
	printf("%s\n", "4 - Largest palindrome product");
	printf("%s\n", "5 - Smallest multiple");
	printf("%s\n", "6 - Sum square difference");
	printf("%s\n", "7 - 10001st prime");
	printf("%s\n", "8 - Largest product in a series");

	results[0] = test_sum_multiples();
	results[1] = test_sum_even_fibonacci_numbers();

	printf("\n");
	for (i = 0; i < 8; i++) {
		if (results[i] == 0) {
			printf("Problem %d passed.\n", i + 1);
		} else {
			printf("Problem %d failed.\n", i + 1);
		}
	}

	return 0;
}

/**
 *
 */
int test_sum_multiples(void) {

	/* arrange */
	int expected, result;

	expected = 233168;
	result = 0;

	/* act */ 
	result = sum_multiples(3, 5, 1000);

	/* assert */
	if (expected == result)
		return 0;

	return 1;
}

/**
 *
 */
int test_sum_even_fibonacci_numbers(void) {

	/* arrange */
	int expected, result, limit;

	expected = 4613732;
	result = 0;
	limit = 4000000;

	/* act */ 
	result = sum_even_fibonacci_numbers(limit);

	/* assert */
	if (expected == result)
		return 0;

	return 1;
}

/**
 *
 */
int test_largest_prime_factor(void) {

	/* arrange */
	long long int expected, result, limit;

	expected = 0;
	result = 0;
	limit = 600851475143;

	/* act */ 
	result = largest_prime_factor(limit);

	/* assert */
	if (expected == result)
		return 0;

	return 1;
}

/**
 *
 */
int test_largest_palindrome_product(void) {

	/* arrange */
	int expected, result;

	expected = 0;
	result = 0;

	/* act */ 
	result = 0;

	/* assert */
	if (expected == result)
		return 0;

	return 1;
}

/**
 *
 */
int test_smallest_multiple(void) {

	/* arrange */
	int expected, result;

	expected = 0;
	result = 0;

	/* act */ 
	result = 0;

	/* assert */
	if (expected == result)
		return 0;

	return 1;
}

/**
 *
 */
int test_sum_square_difference(void) {

	/* arrange */
	int expected, result;

	expected = 0;
	result = 0;

	/* act */ 
	result = 0;

	/* assert */
	if (expected == result)
		return 0;

	return 1;
}

/**
 *
 */
int test_nth_prime(void) {

	/* arrange */
	int expected, result;

	expected = 0;
	result = 0;

	/* act */ 
	result = 0;

	/* assert */
	if (expected == result)
		return 0;

	return 1;
}

/**
 *
 */
int test_largest_product_in_a_series(void) {

	/* arrange */
	int expected, result;

	expected = 0;
	result = 0;

	/* act */ 
	result = 0;

	/* assert */
	if (expected == result)
		return 0;

	return 1;
}