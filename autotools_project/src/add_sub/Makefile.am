AUTOMAKE_OPTIONS = foreign  
# noinst_PROGRAMS表示编译为库，其他变量含义和前面一样  

noinst_PROGRAMS = libadd_sub.so  
lib_LIBRARIES	= libadd_sub.a

libadd_sub_so_SOURCES      = \
    add_sub.c 

libadd_sub_a_SOURCES      = \
    add_sub.c 

# 指向include目录,fPIC表示生成库 
libadd_sub_so_CFLAGS    = \
    -fpic -shared  -I./../../include
  
libadd_sub_a_CFLAGS    = \
    -I./../../include


# lib_LIBRARIES创建的静态库会自动创建安装和删除程序，不需要自己写
# 当我们执行make install的时候，执行install-exec-local，则install-noinst_PROGRAMS将会被执行 
# 相当于在命令行输入:$file就是每次循环取出的元素，即libadd_sub.so 
# for file in libadd_sub.so;  
#   do    
#      /usr/bin/install -c $file prefix/lib/hello;
#   done 
# 
# 创建目录/（prefix路径）/lib/
# 安装动态库到目录/(prefix路径)/lib/
install-noinst_PROGRAMS: $(noinst_PROGRAMS)    
	$(mkinstalldirs) $(libdir);

	for file in $(noinst_PROGRAMS); do \
	$(INSTALL_PROGRAM) $$file $(libdir); \
	done  

install-exec-local: install-noinst_PROGRAMS     


# make uninstall时删除动态库
uninstall-local:
	rm -f $(libdir)/$(noinst_PROGRAMS);