# Shell Project Description

The project is a UNIX command line interpreter. The shell has prompt ($) and its shown every time a command is executed. It has a handles errors, It handle the end of file condition (Ctrl+D). This handle command lines with arguments (as ls, pwd, echo, cat, env, and others), PATH and implement the exit and env built-in commands. 

## Instructions

### Clone repository
To clone the repository, you must type the following command: 
```bash
git clone https://github.com/yulyzulu/simple_shell.git
```
### Compilation
To compile the program, it must be compiled with the following command: 
```bash
 gcc Wall Werror Wextra pedantic *.c o hsh
```
### Execution

To execute the program you must type:
```bash
(./hsh)
```
### man
To open the man you must type
```bash
man ./man_1_simple_shell
```

### Exit
To exit the program, you can use exit or CTRL+D command. 

## Files

```bash
man_1_simple_shell: Manual of the program.

README.md: Description of the repository.

AUTHORS: Authors of the repository.

main.c: File to call Shell functions.

read_line.c: Get the text typed by the user.

parse_line.c: Parse the string.

built_in.c: Execute built commands.

concatenate_list.c: Concatenate nodes.

functions_help.c: File containing the functions: _strlen: Return lenth to a string;
_strcmp: Compares two strings; _strcat: Concateate two strings; _realloc: reallocates a memory block

functions_help2.c: File containing the functions: add_node: Add new node at the beginning of a list;
free_list: Free a list;_strcpy: copies the string pointed; string_nconcat: Concatenates two strings; 
_strdup: Duplicate a string.

send_list.c: Create a list.

shell.h: Header.

```
## Flowchart
https://drive.google.com/file/d/1QZn_CfU1CYCpTw65ikd1H8sy1Ze3XewL/view?usp=sharing
## Examples

To use the shell project, you can enter commands and this return the functions:

### ls and ls -l commands
```bash
vagrant@vagrant-ubuntu-trusty-64:~/simple_shell$ ./hsh
($) ls
AUTHORS    built_in.c          functions_help.c   hsh             main.c              parse_line.c  shell.h
README.md  concatenate_list.c  functions_help2.c  list_creator.c  man_1_simple_shell  read_line.c
($) ls -l
total 72
-rw-rw-r-- 1 vagrant vagrant   176 Nov 27 21:24 AUTHORS
-rw-rw-r-- 1 vagrant vagrant    15 Nov 27 21:24 README.md
-rw-rw-r-- 1 vagrant vagrant   615 Nov 27 21:24 built_in.c
-rw-rw-r-- 1 vagrant vagrant   620 Nov 27 21:24 concatenate_list.c
-rw-rw-r-- 1 vagrant vagrant  1934 Nov 27 21:24 functions_help.c
-rw-rw-r-- 1 vagrant vagrant  1972 Nov 27 21:24 functions_help2.c
-rwxrwxr-x 1 vagrant vagrant 22211 Nov 27 21:24 hsh
-rw-rw-r-- 1 vagrant vagrant   351 Nov 27 21:24 list_creator.c
-rw-rw-r-- 1 vagrant vagrant   847 Nov 27 21:24 main.c
-rw-rw-r-- 1 vagrant vagrant  3394 Nov 27 21:24 man_1_simple_shell
-rw-rw-r-- 1 vagrant vagrant   688 Nov 27 21:24 parse_line.c
-rw-rw-r-- 1 vagrant vagrant   371 Nov 27 21:24 read_line.c
-rw-rw-r-- 1 vagrant vagrant  1178 Nov 27 21:24 shell.h
($)

```

### echo and pwd commands

```bash
vagrant@vagrant-ubuntu-trusty-64:~/simple_shell$ echo Hola Mundo!
Hola Mundo!
vagrant@vagrant-ubuntu-trusty-64:~/simple_shell$ pwd
/home/vagrant/simple_shell
vagrant@vagrant-ubuntu-trusty-64:~/simple_shell$
```

### /bin/ls and exit commands
```bash
vagrant@vagrant-ubuntu-trusty-64:~/simple_shell$ ./hsh
($) /bin/ls
AUTHORS    built_in.c          functions_help.c   hsh             main.c              parse_line.c  shell.h
README.md  concatenate_list.c  functions_help2.c  list_creator.c  man_1_simple_shell  read_line.c
($) exit
vagrant@vagrant-ubuntu-trusty-64:~/simple_shell$
```



## Authors
Cristian Gómez Bernal- Github: cristian-fg

Yulieth Zuluaga Gómez- Github: yulyzulu

