AUTOMAKE_OPTIONS = foreign

# 使用libtool生成so库
lib_LTLIBRARIES = libadd_sub.la 


libadd_sub_la_SOURCES      = \
    add_sub.c 

# 1. 确保make install时，该头文件会被安装
# 2. 确保make dist时，会一起打包该头文件
include_HEADERS = ../../include/add_sub.h

libadd_sub_la_CFLAGS = $(AM_CFLAGS) -I../../include/
libadd_sub_la_LDFLAGS = $(LTLDFLAGS)

