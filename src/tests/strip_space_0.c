/* Test 0 of strip_space.
 * $Id$
 * Description: Test strip_space on "abcd".
 *
 * Authors:
 * Matthew Mundell <matt@mundell.ukfsn.org>
 *
 * Copyright:
 * Copyright (C) 2008 Greenbone Networks GmbH
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2,
 * or, at your option, any later version as published by the Free
 * Software Foundation
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../string.h"

int
main ()
{
  char string[5];
  char *expect = "abcd";

  setup_test ();

  strncpy (string, "abcd", 5);

  char* result = strip_space (string, string + 4);
  if (strlen (result) != 4 || strcmp (result, expect))
    return EXIT_FAILURE;

  return EXIT_SUCCESS;
}
