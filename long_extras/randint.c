/*=============================================================================

    This file is part of FLINT.

    FLINT is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    FLINT is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with FLINT; if not, write to the Free Software
    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA

=============================================================================*/
/******************************************************************************

    Copyright (C) 2009 William Hart
    Copyright (C) 2011 Sebastian Pancratz

******************************************************************************/

#include <limits.h>

#include "flint.h"
#include "ulong_extras.h"

mp_limb_t z_randint(flint_rand_t state, mp_limb_t limit) 
{
    mp_limb_t z;

    if ((limit == UWORD(0)) || (limit > LONG_MAX))
        limit = LONG_MAX;

    z = n_randlimb(state) % limit;
    if (n_randint(state, 2))
        z = -z;

    return z;
}
