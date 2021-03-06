/*

  G N O K I I

  A Linux/Unix toolset and driver for the mobile phones.

  This file is part of gnokii.

  Copyright (C) 2000 Hugh Blemings, Pavel Janik
  Copyright (C) 2001 Manfred Jonsson <manfred.jonsson@gmx.de>
  Copyright (C) 2002 Ladis Michl

  This file provides functions specific to AT commands on Siemens phones.
  See README for more details on supported mobile phones.

*/

#ifndef _gnokii_atsie_h_
#define _gnokii_atsie_h_

#include "gnokii.h"

void at_siemens_init(char* foundmodel, char* setupmodel, struct gn_statemachine *state);

#endif
