/*
 * Copyright (C) 2010-2012 OregonCore <http://www.oregoncore.com/>
 * Copyright (C) 2008-2012 TrinityCore <http://www.trinitycore.org/>
 * Copyright (C) 2005-2012 MaNGOS <http://getmangos.com/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef OREGON_REFERENCEHOLDER_H
#define OREGON_REFERENCEHOLDER_H

/* ReferenceHolder holds the actualy referenced obejct as well the refence
   count.  The ReferenecHolder implements as a policy base object and
   will decided by the Reference class to be consnsitent.
*/

template
<
typename T,
class THREADING_MODEL
>
struct ReferenceHolder : public THREADING_MODEL
{
    explicit ReferenceHolder(T *ref) : i_referencee(ref), i_referenceCount(0) {}
    T *i_referencee;
    unsigned int i_referenceCount;
    typedef typename THREADING_MODEL::Lock Lock;
};
#endif

