// Debug Drawing

#ifndef DBD_H
#define DBD_H

#include "vmath.h"
#include "rendercontext.h"

extern void dbd_init(void);

extern void dbd_clear(void);

extern void dbd_line( const vec3_t fr, const vec3_t to );

extern void dbd_box( const vec3_t& p, const vec3_t& x, const vec3_t& y, const vec3_t& z );

extern void dbd_box( const mat44_t& m );

extern void dbd_draw_edge( const rendercontext_t& rc );

extern void dbd_crosshairs( const vec3_t& p, float sz );

extern void dbd_vector( const vec3_t& fr, const vec3_t& to );

#endif

