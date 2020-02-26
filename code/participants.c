/**
 * participants.c
 *   A simple C program to print the participants from your team.
 *   Intended as an example of updating code on GitHub.
 */

// +---------+---------------------------------------------------------
// | Headers |
// +---------+

#include <stdio.h>

// +------+------------------------------------------------------------
// | Main |
// +------+

int 
main (int argc, char *argv[])
{
  int i = 0;

  printf ("%02d: Tracy Lewis-Williams\n", ++i);

  printf ("There are %i participants.\n", i);

  return 0;
} // main
