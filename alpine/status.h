/*
 * $Id: status.h 136 2006-09-22 20:06:05Z hubert@u.washington.edu $
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

#ifndef PINE_STATUS_INCLUDED
#define PINE_STATUS_INCLUDED


#include "../pith/status.h"


/* exported protoypes */
int	    messages_queued(long *);
char	   *last_message_queued(void);
void	    flush_ordered_messages(void);
int	    status_message_write(char *, int);
void	    mark_status_dirty(void);
void	    mark_status_unknown(void);


#endif /* PINE_STATUS_INCLUDED */
