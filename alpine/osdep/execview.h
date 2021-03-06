/*
 * $Id: execview.h 136 2006-09-22 20:06:05Z hubert@u.washington.edu $
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

#ifndef PINE_OSDEP_EXECVIEW_INCLUDED
#define PINE_OSDEP_EXECVIEW_INCLUDED

#include "../../pith/mailcap.h"

/* exported prototypes */
void	exec_mailcap_cmd(MCAP_CMD_S *, char *, int);
char   *url_os_specified_browser(char *);
char   *execview_pretty_command(MCAP_CMD_S *, int *);


#endif /* PINE_OSDEP_EXECVIEW_INCLUDED */
