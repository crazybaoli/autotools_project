# bin_PROGRAMS表示编译为可执行文件，其中产生文件名为name，则name_SOURCE=当前目录的编译文件名字，  
# name_CFLAGS和name_CPPFLAGS表示当前编译的编译选项，name_LDFLAGS就是表示当前编译的链接选项等，  
# 填充好这些变量autotools会自动帮我们组合为一组组编译命令  
  
AUTOMAKE_OPTIONS = foreign    
  
bin_PROGRAMS = main   
 
main_SOURCES      = \
        main.c  

# 指定libadd_sub.so库路径
main_LDFLAGS    =\
    -L./add_sub

# 链接libadd_sub.so库
LIBS =  -ladd_sub

main_CFLAGS = \
    -I./../include