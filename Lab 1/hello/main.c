// Varrahan Uthayan 101229572
#include <stdio.h>
#include <stdlib.h>

/* main: Lab 1, Exercise 2. */

int main(void)
{
	printf("Hello world!\n");
	printf("C programming is fun!\n");
	return EXIT_SUCCESS;
}

/*  a)Removing the closing brace provided the error: error #2001: Syntax error: expected '}' but found 'end of input'.

	b)Removing the opening brace provided the errors: C:\Users\varra\OneDrive\Documents\Pelles C Projects\hello\main.c(8): error #2001: Syntax error: expected ';' but found 'printf'.
	C:\Users\varra\OneDrive\Documents\Pelles C Projects\hello\main.c(8): warning #2099: Missing type specifier; assuming 'int'.
	C:\Users\varra\OneDrive\Documents\Pelles C Projects\hello\main.c(8): error #2001: Syntax error: expected ')' but found 'string constant'.
	C:\Users\varra\OneDrive\Documents\Pelles C Projects\hello\main.c(8): error #2120: Redeclaration of 'printf', previously declared at C:\Program Files\PellesC\Include\stdio.h(106); expected 'int function(const char * restrict, ...)' but found 'int function()'.
	C:\Users\varra\OneDrive\Documents\Pelles C Projects\hello\main.c(9): warning #2099: Missing type specifier; assuming 'int'.
	C:\Users\varra\OneDrive\Documents\Pelles C Projects\hello\main.c(9): error #2001: Syntax error: expected ')' but found 'string constant'.
	C:\Users\varra\OneDrive\Documents\Pelles C Projects\hello\main.c(10): error #2156: Unrecognized declaration.
	C:\Users\varra\OneDrive\Documents\Pelles C Projects\hello\main.c(10): error #2156: Unrecognized declaration.
	C:\Users\varra\OneDrive\Documents\Pelles C Projects\hello\main.c(11): error #2156: Unrecognized declaration.
 
	c)Removing the int before main provided the error: C:\Users\varra\OneDrive\Documents\Pelles C Projects\hello\main.c(6): warning #2099: Missing type specifier; assuming 'int'.

	d)Chainging main to mian provided the errors: POLINK: error: Unresolved external symbol 'main' - referenced from 'crt64.lib(_crt0.obj)'.
	POLINK: fatal error: 1 unresolved external(s).
 
	e)Removing the closing * / from the comment provided the error: POLINK: error: Unresolved external symbol 'main' - referenced from 'crt64.lib(_crt0.obj)'.
	POLINK: fatal error: 1 unresolved external(s)

	f)Changing the first occurence of printf to pintf provided the errors: POLINK: error: Unresolved external symbol 'pintf' - referenced from 'C:\Users\varra\OneDrive\Documents\Pelles C Projects\hello\output\main.obj'.
	POLINK: fatal error: 1 unresolved external(s)

	g)Deleting one of the ) parentheses provided the error: C:\Users\varra\OneDrive\Documents\Pelles C Projects\hello\main.c(8): error #2001: Syntax error: expected ')' but found ';'. 

	h)Duplicating one of the ( parentheses provided the error: C:\Users\varra\OneDrive\Documents\Pelles C Projects\hello\main.c(9): error #2001: Syntax error: expected ')' but found ';'.


	i)Removing the ; from the return statement provided the error: C:\Users\varra\OneDrive\Documents\Pelles C Projects\hello\main.c(11): error #2001: Syntax error: expected ';' but found '}'. */
