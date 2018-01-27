#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT(hello, 1.0, baoliw@foxmail.com)
AC_CONFIG_SRCDIR([src/main.c])
AC_CONFIG_HEADERS([config.h])
# make dist时生成xxx.tar.bz2打包压缩格式，默认是xxx.tar.gz
AM_INIT_AUTOMAKE([foreign dist-bzip2])

# Checks for programs.
AC_PROG_CC

# 生成静态库时需要加AC_PROG_RANLIB
AC_PROG_RANLIB

# Checks for libraries.
# FIXME: Replace `main' with a function in `-ladd_sub':
AC_CHECK_LIB([add_sub], [my_add])

# Checks for header files.
AC_CHECK_HEADERS([stdlib.h])

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

AC_CONFIG_FILES([Makefile
                 include/Makefile
                 src/Makefile
                 src/add_sub/Makefile
                 hello.pc])
AC_OUTPUT