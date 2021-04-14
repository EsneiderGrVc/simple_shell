# simple_shell

[![](https://cdn.iconscout.com/icon/free/png-256/c-programming-569564.png)](https://es.wikipedia.org/wiki/C_(lenguaje_de_programaci%C3%B3n))

simple_shell is a project that aims to emulate the [UNIX shell] behavior.
## Description:
simple_shell project is a program developed in C lenguage using the following concepts:
 - PID & PPID
 - Arguments
 - Executing a program
 - Creating processes
 - Wait
 - File information
 - Environment

The key functions and system calls used to develope this program are:
 `exceve` - `exit`- `fork` - `free` - `getline`
 `isatty` - `malloc`- `perror` - `read` - `stat`
 `strtok` - `wait`- `write`

# Compilation and Execution

#### 1. Clone the repository
 ```sh
https://github.com/sneidergv/simple_shell.git
```
#### 2. Compile
To compile the shell you need the `gcc 4.8.4` version or upper.
Then, compile in this way:
 ```sh
gcc -Wall -Werror -Wextra -pedantic *.c holberton.h -o hsh
```
#### 3. Execute interactive mode.
Executing the shell in interactive mode follows to interact with the program passing one of the commands allowed one by one until you decide ending the executing process typing `exit` or pressing the command `Ctrl + D`.
 ```sh
./hsh
```
#### 4. Execute no interactive mode.
Executing the shell in no interactive mode allows pass commands throught pipeline.
For instance:
 ```sh
echo "ls -S" | ./hsh
```
Additionally you can pass several commands stored in a file, like this:
 ```sh
cat <file> | ./hsh
```


## Features
 - The simple_shell can perform all the programs stored in the PATH variable.
 - Also simple_shell can perform two of the built-in functions:
`exit` and `env`.

 ## Authors:
  - [Vanesa Mususué Castro]
  - [Esneider Granada Valencia]

[UNIX shell]: <https://en.wikipedia.org/wiki/Unix_shell>
[Esneider Granada Valencia]: <https://github.com/sneidergv/>
[Vanesa Mususué Castro]: <https://github.com/vanemcb/>