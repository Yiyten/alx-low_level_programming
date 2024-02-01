#include<stdio.h>

/**
 * myStartupFun - Apply the Constructor Attribute to myStartupFun() so that it
 *   is executed Before main()
 */
void myStartupFun(void) __attribute__ ((constructor));

/**
 * myStartupFun - Implementation of myStartupFun
 */
void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

