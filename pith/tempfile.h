/*
 * $Id: tempfile.h 745 2007-10-11 18:03:32Z hubert@u.washington.edu $
 *
 * ========================================================================
 * Copyright 2006-2007 University of Washington
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * ========================================================================
 */

#ifndef PITH_TEMPFILE_INCLUDED
#define PITH_TEMPFILE_INCLUDED


/* exported protoypes */
char	     *tempfile_in_same_dir(char *, char *, char **);
int	      in_dir(char *, char *);


#endif /* PITH_TEMPFILE_INCLUDED */
