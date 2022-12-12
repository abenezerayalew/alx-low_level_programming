# Dynamic libraries
# steps to create Dynamic Library
	1. create c file which contain function.
	2. after that RUN gcc -c -Wall -Werror -fpic 'file_name'.c
	3. after you got the object file (".o")
	4. gcc -shared -o "name_it".so "nameOfTheObjectfile".o

# To check your library
	1. ls -la lib*
	2. nm -D libdynamic.so 
