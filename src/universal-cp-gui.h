/*
 * Copyright (C) 2007 Zeeshan Ali <zeenix@gstreamer.net>
 *
 * Authors: Zeeshan Ali <zeenix@gstreamer.net>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#ifndef __GUPNP_UNIVERSAL_CP_GUI_H__
#define __GUPNP_UNIVERSAL_CP_GUI_H__

#include <libgupnp/gupnp-control-point.h>
#include <gtk/gtk.h>
#include <glade/glade.h>

#include "universal-cp-devicetreeview.h"

enum
{
        ICON_DEVICES,
        ICON_DEVICE,
        ICON_SERVICE,
        ICON_VARIABLES,
        ICON_VARIABLE,
        ICON_ACTION,
        ICON_ACTION_ARG,
        ICON_LAST
};

extern GladeXML  *glade_xml;
extern GdkPixbuf *icons[ICON_LAST];

void
display_event      (const char       *notified_at,
                    const char       *friendly_name,
                    const char       *service_id,
                    const char       *variable_name,
                    const char       *value);

void
update_details     (const char      **tuples);

void
setup_treeview     (GtkWidget    *treeview,
                    GtkTreeModel *model,
                    char         *headers[],
                    int           render_index);

gboolean
init_ui            (gint             *argc,
                    gchar           **argv[]);

void
deinit_ui          (void);

#endif /* __GUPNP_UNIVERSAL_CP_GUI_H__ */