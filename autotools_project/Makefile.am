# DIST_SUBDIRS 全局变量表示有哪些子目录需要编译Makefile.am  
SUBDIRS = \
    include \
    src/add_sub \
    src  
DIST_SUBDIRS  = $(SUBDIRS)  

# 生成xxx.pc,需要文件xx.pc.in，并将xxx.pc安装到 $(libdir)/pkgconfig 
pkgconfigdir = $(libdir)/pkgconfig  
pkgconfig_DATA = hello.pc  