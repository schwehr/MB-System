
if BUILD_MBTNAV

TRNWLIBS = ${top_builddir}/src/mbtrnav/libtrnw.la ${top_builddir}/src/mbtrnav/libqnx.la \
  ${top_builddir}/src/mbtrnav/libnewmat.la  ${top_builddir}/src/mbtrnav/libtnav.la  \
  ${top_builddir}/src/mbtrnav/libgeolib.la ${top_builddir}/src/mbtrnav/libnetif.la

MBTRNLIBS = \
  $(top_builddir)/src/mbtrn/libr7kr.la \
  $(top_builddir)/src/mbtrn/libmb1r.la

MBTNAV_INC=-I${top_builddir}/src/mbtrnav/terrain-nav  \
  -I${top_builddir}/src/mbtrnav/gctp  \
  -I${top_builddir}/src/mbtrnav/newmat  \
  -I${top_builddir}/src/mbtrnav/qnx-utils  \
  -I${top_builddir}/src/mbtrnav/trnw  \
  -I${top_builddir}/src/mbtrnav/utils  \
  -I${top_builddir}/src/mbtrn/mb1r

MBTRN_INC = -I${top_srcdir}/src/mbtrn/r7kr  \
  -I${top_srcdir}/src/mbtrn/utils  \
  -I${top_srcdir}/src/mbtrnframe

MBTNAV_OPT=-DWITH_MBTNAV
endif

if BUILD_MOTIF
LIBMBXGR = $(top_builddir)/src/mbaux/libmbxgr.la
endif

AM_CFLAGS = ${libgmt_CFLAGS} ${libnetcdf_CFLAGS}

# add -DMBTRN_VER="<version>" to override version defined in mbtrn.h
BUILD_DATE=`date +%Y/%m/%dT%H:%M:%S%z`

TRNC_VER='-DTRNC_VER=1.0'
FRAMES7K_VER='-DFRAMES7K_VER=1.0'
STREAM7K_VER='-DSTREAM7K_VER=1.0'
TBIN_VER='-DTBIN_VER=1.0'
EMU7K_VER='-DEMU_VER=1.0'
TEST_OPTS=-DWITH_TESTS -DWITH_R7KR_TEST
AM_CPPFLAGS = -g -O0
AM_CPPFLAGS += -DHAVE_CONFIG_H
AM_CPPFLAGS += -DWITH_MST_MSTATS
AM_CPPFLAGS += -DMST_STATS_EN
AM_CPPFLAGS += -DWITH_PDEBUG
AM_CPPFLAGS += -DWITH_MMDEBUG
AM_CPPFLAGS += -D_GNU_SOURCE
AM_CPPFLAGS += -DMBTRNFRAME_BUILD="${BUILD_DATE}"
AM_CPPFLAGS += ${TEST_OPTS}
AM_CPPFLAGS += $(MBTRN_INC)
AM_CPPFLAGS += $(MBTNAV_INC)
AM_CPPFLAGS += ${libproj_CPPFLAGS}
AM_CPPFLAGS += ${libgmt_CPPFLAGS}
AM_CPPFLAGS += ${libnetcdf_CPPFLAGS}
AM_CPPFLAGS += ${FRAMES7K_VER}
AM_CPPFLAGS += ${TRNC_VER}
AM_CPPFLAGS += ${STREAM7K_VER}
AM_CPPFLAGS += ${TBIN_VER}
AM_CPPFLAGS += ${EMU7K_VER}
AM_CPPFLAGS += ${MBTNAV_OPT}

bin_PROGRAMS =  mbtrnpp mbgrd2octree mbgrdtilemaker

mbtrnpp_SOURCES = mbtrnpp.c

mbtrnpp_LDADD =  $(top_builddir)/src/mbio/libmbio.la \
  $(top_builddir)/src/mbtrnframe/libmbtrnframe.la \
  $(top_builddir)/src/mbaux/libmbaux.la \
  $(LIBMBXGR) \
  ${libgmt_LIBS} ${libnetcdf_LIBS} ${libproj_LIBS} \
  $(MBTRNLIBS) \
  $(TRNWLIBS) $(LIBM)

mbgrd2octree_SOURCES = mbgrd2octree.cc
mbgrd2octree_LDADD =  \
  ${libgmt_LIBS} ${libnetcdf_LIBS} ${libproj_LIBS} \
  $(TRNWLIBS) $(LIBM)

mbgrdtilemaker_SOURCES = mbgrdtilemaker.cc
mbgrdtilemaker_CPPFLAGS = -I${top_srcdir}/src/mbaux
mbgrdtilemaker_LDADD =  $(top_builddir)/src/mbio/libmbio.la \
  $(top_builddir)/src/mbaux/libmbaux.la \
  $(LIBMBXGR) \
  ${libgmt_LIBS} ${libnetcdf_LIBS} ${libproj_LIBS} $(LIBM)

CLEANFILES =
DISTCLEANFILES =
