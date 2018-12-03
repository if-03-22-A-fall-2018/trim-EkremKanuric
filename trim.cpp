/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: 2AHIF
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			trim.cpp
 * Author:			P. Bauer
 * Due Date:		March 14, 2015
 * ----------------------------------------------------------
 * Description:
 * Test functions for trim.h
 * ----------------------------------------------------------
 */
#include "trim.h"

void trim	(const char* source,char* trimmed_string)
{
  //declaration of variables
 int start = 0;
 int end = strlen(source)-1;

 //checks if source is empty
 if (strlen(source) == 0) {
  strcpy(trimmed_string, source);
  return;
 }

//get start of string
 for (start; source[start] == ' '; start++);

//get end of string
 for (end;source[end] == ' '; end--);

//copy string into trimmed_string
 for (int i = 0; start <= end; i++) {
  trimmed_string[i] = source[start];
  start++;
  }
}
