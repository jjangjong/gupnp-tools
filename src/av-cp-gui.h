/*
 * Copyright (C) 2007 Zeeshan Ali <zeenix@gstreamer.net>
 *
 * Authors: Zeeshan Ali <zeenix@gstreamer.net>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Library General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#ifndef __GUPNP_AV_CP_GUI_H__
#define __GUPNP_AV_CP_GUI_H__

#include <libgupnp/gupnp-control-point.h>
#include <gtk/gtk.h>
#include <glade/glade.h>

#include "av-cp-playlisttreeview.h"

gboolean
init_ui                         (gint             *argc,
                                 gchar           **argv[]);

void
deinit_ui                       (void);

#endif /* __GUPNP_AV_CP_GUI_H__ */

