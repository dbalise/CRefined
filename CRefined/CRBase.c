//
//  CRBase.c
//  CRefined
//
//  Created by Dustin Balise on 9/20/13.
//  Copyright (c) 2013 Dustin R. Balise. All rights reserved.
//

#include <CRefined/CRBase.h>


/** 
 * Returns a range type.
 *
 * @param[in] start The starting location of the range.
 *
 * @param[in] length The length of the range.
 *
 * @return The range.
 */
CRRange CRRangeMake(CRIndex start, CRIndex length)
{
    CRRange range;
    range.start = start;
    range.length = length;
    return range;
}