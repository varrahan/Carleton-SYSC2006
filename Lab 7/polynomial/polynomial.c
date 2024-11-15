/*Varrahan Uthayan 101229572
 *polynomial.c - SYSC 2006 Lab 7 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>

#include "polynomial.h"

/* Print a polynomial term in the form ax^n; for example,
 * a term with coefficient 4 and exponent 5 is printed as 4x^5.
 */
void print_term(term_t *term)
{
    printf("%dx^%d", term->coeff, term->exp);
}

/* Make a polynomial term with coefficient coeff and exponent exp
 * and return the pointer to the term.
 *
 * Memory for the term is allocated from the heap.
 *
 * Terminate the program via assert if:
 * (1) coeff is 0;
 * (2) malloc fails.
 */
term_t *make_term(int coeff, int exp)
{	
	
	assert(coeff != 0);
	term_t* func = malloc(sizeof(term_t));
	assert(func != NULL);
	func->coeff = coeff;
	func->exp = exp;
	return func;
}

/* Return the value of a polynomial term; i.e., return ax^n for a term with
 * coefficient a and exponent n when evaluated at x.
 * Example: if a term has coefficient 3 and exponent 2 and x is 4.0, 
 * this function returns 3(4.0^2), which is 48.0.
 */
double eval_term(term_t *term, double x)
{
	for(int i = 1; i < term->exp; i++){
		x *= x;
		}
		if(term->exp == 0){
		x = 1;
		}
    return term->coeff * x;
}

/* Make a polynomial that has 0 terms and return the pointer to the polynomial. 
 * The polynomial can store up to MAX_TERMS terms (see polynomial.h).
 *
 * Memory for the polynomial is allocated from the heap.
 *
 * Terminate the program via assert if malloc fails.
 */
polynomial_t *make_polynomial(void)
{
    polynomial_t *polynomial = malloc(sizeof(polynomial_t));
	polynomial->num_terms = 0;
	return polynomial;
}

/* Add a term to a polynomial.
 *
 * This function doesn't check if the polynomial already contains a term with the
 * same exponent as the term being added; in other words, it's the caller's 
 * reponsibility to ensure that the polynomial doesn't have terms with duplicate 
 * exponents.
 *
 * Terminate the program via assert if there's no room in the polynomial for 
 * additional terms.
 */
void add_term(polynomial_t *poly, term_t *term)
{
	assert(poly->num_terms < MAX_TERMS);
	poly->terms[poly->num_terms] = term;
	poly->num_terms++;
}

/* Return the value of a polynomial when it is evaluated at x.
 *
 * Terminate the program via assert if the polynomial has 0 terms.
 */
double eval_polynomial(polynomial_t *poly, double x)
{	double eval = 0;
	for(int i = 0; i < poly->num_terms; i++){
		eval += poly->terms[i]->coeff * pow(x, poly->terms[i]->exp);
	}
    return eval;
}
