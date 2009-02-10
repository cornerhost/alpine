/*
 * $Id: search.h 136 2006-09-22 20:06:05Z hubert@u.washington.edu $
 *
 * ========================================================================
 * Copyright 2006 University of Washington
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * ========================================================================
 */

#ifndef PITH_SEARCH_INCLUDED
#define PITH_SEARCH_INCLUDED


/* exported protoypes */
SEARCHSET    *build_searchset(MAILSTREAM *);
int           in_searchset(SEARCHSET *, unsigned long);


#endif /* PITH_SEARCH_INCLUDED */
