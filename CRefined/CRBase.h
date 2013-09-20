//
//  CRBase.h
//  CRefined
//
//  Created by Dustin Balise on 9/20/13.
//  Copyright (c) 2013 Dustin R. Balise. All rights reserved.
//

#ifndef CRefined_CRBase_h
#define CRefined_CRBase_h

#include <CRefined/CRDefs.h>


/** A boolean type. */
typedef enum {
    CRNo,           /**< Boolean false. Interchangeable with \tt CRFalse. */
    CRFalse = CRNo, /**< Boolean false. Interchangeable with \tt CRNo. */
    CRYes,          /**< Boolean true. Interchangeable with \tt CRTrue. */
    CRTrue = CRYes  /**< Boolean true. Interchangeable with \tt CRYes. */
} CRBool;

/** The default type for indices, ranges, and related values. */
typedef signed long CRIndex;

/** A range type. */
typedef struct {
    CRIndex start;  /**< The starting index or location of the range. */
    CRIndex length; /**< The length of the range. */
} CRRange;

CR_INLINE CRRange CRRangeMake(CRIndex start, CRIndex length);

#endif
