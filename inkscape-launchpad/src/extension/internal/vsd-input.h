/*
 * This code abstracts the libwpg interfaces into the Inkscape
 * input extension interface.
 *
 * Authors:
 *   Fridrich Strba (fridrich.strba@bluewin.ch)
 *
 * Copyright (C) 2012 Authors
 *
 * Released under GNU GPL, read the file 'COPYING' for more information
 */

#ifndef __EXTENSION_INTERNAL_VSDOUTPUT_H__
#define __EXTENSION_INTERNAL_VSDOUTPUT_H__

#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#ifdef WITH_LIBVISIO

#if GLIBMM_DISABLE_DEPRECATED && HAVE_GLIBMM_THREADS_H
#include <glibmm/threads.h>
#endif

#include <gtkmm/dialog.h>

#include "../implementation/implementation.h"

namespace Inkscape {
namespace Extension {
namespace Internal {

class VsdInput : public Inkscape::Extension::Implementation::Implementation {
     VsdInput () { };
public:
     SPDocument *open( Inkscape::Extension::Input *mod,
                       const gchar *uri );
     static void         init( void );

};

} } }  /* namespace Inkscape, Extension, Implementation */

#endif /* WITH_LIBVISIO */
#endif /* __EXTENSION_INTERNAL_VSDOUTPUT_H__ */


/*
  Local Variables:
  mode:c++
  c-file-style:"stroustrup"
  c-file-offsets:((innamespace . 0)(inline-open . 0))
  indent-tabs-mode:nil
  fill-column:99
  End:
*/
// vim: filetype=cpp:expandtab:shiftwidth=4:tabstop=8:softtabstop=4 :
