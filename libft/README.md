# libft
## Implementation of some of the Standard C Library functions

Libft is the first project in the study program at School 42.
The purpose of the project is to introduce to students standard C functions that we will be able to use in our future projects.
To give a deeper understanding of functions we needed to create our own realization of standard functions.

All functions are created in accordance with Norm - bunch of rules how code should be formatted according to the school.

**!NOTE** <br />
Because of 42 School norm requirements: <br />
* All variables are declared and aligned at the top of each function <br />
* Each function can't have more then 25 lines of code <br />
* C++ style code commenting is forbidden <br />
* Project should be created just with allowed functions otherwise it's cheating. <br />

### The project consists of 3 main logical parts:
* Standard Libc functions
* Additional functions
* Bonus part functions

### How to compile library:

Using Makefile you can create library file libft.a<br/>
Makefile has 5 main options:<br/>
* **make** - to compile C files - create object files and library libft.a<br/>
* **make clean** - to remove object files<br/>
* **make fclean** - remove libft.a file<br/>
* **make re** - recompile the library<br/>
* **make bonus** - compile files from the bonus part only<br/>


### Short description of each function:

#### Main part

| Function      | Description                                                                           |
| ------------- | --------------------------------------------------------------------------------------| 
| memset | fill a byte string with a byte value |
| bzero | write zeroes to a byte string |
| memcpy | copy memory area |
| memmove | copy byte string |
| memchr | locate byte in byte string |
| memcmp | compare byte string |
| strlen | find length of string |
| strdup | save a copy of a string |
| strlcpy | size-bounded string copying |
| strlcat | size-bounded string copying and concatenation |
| strchr | locate character in string |
| strrchr | locate character in string reversely |
| strnstr | locate a substring in a string |
| strncmp | compare strings |
| atoi | convert ASCII string to integer |
| isalpha | alphabetic character test |
| isdigit | decimal-digit character test |
| isalnum | alphanumeric character test |
| isascii | test for ASCII character |
| isprint | printing character test (space character inclusive) |
| toupper | lower case to upper case letter conversion |
| tolower | upper case to lower case letter conversion |
| calloc | dynamically allocate specified number of block of memory of the specified type |



#### Additional functions

| Function      | Description                                                                           |
| ------------- | --------------------------------------------------------------------------------------| 
| ft_striteri   | applies the function f to each character of the string passed as argument, and passing its index as first argument. Each character is passed by address to f to be modified if necessary |
| ft_strmapi    | applies the function f to each character of the string passed as argument by giving its index as first argument to create a “fresh” new string (with malloc(3)) resulting from the successive applications of f |
| ft_strjoin    | allocates (with malloc(3)) and returns a “fresh” string ending with ’\0’, result of the concatenation of s1 and s2. If the allocation fails the function returns NULL |
| ft_strtrim    | allocates (with malloc(3)) and returns a copy of the string given as argument without whitespaces at the beginning or at the end of the string. Will be considered as whitespaces the following characters ’ ’, ’\n’ and ’\t’. If s has no whitespaces at the beginning or at the end, the function returns a copy of s. If the allocation fails the function returns NULL |
| ft_split   | allocates (with malloc(3)) and returns an array of “fresh” strings (all ending with ’\0’, including the array itself) obtained by spliting s using the character c as a delimiter. If the allocation fails the function returns NULL. Example: ft_strsplit(" hello fellow    students ", ’ ’) returns the array ["hello", "fellow", "students"] |
| ft_itoa       | allocate (with malloc(3)) and returns a “fresh” string ending with ’\0’ representing the integer n given as argument. Negative numbers must be supported. If the allocation fails, the function returns NULL |
| ft_putchar_fd | outputs the char c to the file descriptor fd |
| ft_putstr_fd  | outputs the string s to the file descriptor fd |
| ft_putendl_fd | outputs the string s to the file descriptor fd followed by a ’\n’ |
| ft_putnbr_fd  | outputs the integer n to the file descriptor fd |
| ft_substr  | outputs substring delimited by parameter start and end |


#### Bonus part

| Function      | Description                                                                           |
| ------------- | --------------------------------------------------------------------------------------| 
| ft_lstnew     | allocates (with malloc(3)) and returns a “fresh” link. The variables content and content_size of the new link are initialized by copy of the parameters of the function. If the parameter content is nul, the variable content is initialized to NULL and the variable content_size is initialized to 0 even if the parameter content_size isn’t. The variable next is initialized to NULL. If the allocation fails, the function returns NULL |
| ft_lstdelone  | takes as a parameter a link’s pointer address and frees the memory of the link’s content using the function del given as a parameter, then frees the link’s memory using free(3). The memory of next must not be freed under any circumstance. Finally, the pointer to the link that was just freed must be set to NULL (quite similar to the function ft_memdel in the mandatory part) |
| ft_lstadd_front | adds the element new at the beginning of the list |
| ft_lstiter    | iterates the list lst and applies the function f to each link |
| ft_lstmap     | iterates a list lst and applies the function f to each link to create a “fresh” list (using malloc(3)) resulting from the successive applications of f. If the allocation fails, the function returns NULL |
| ft_lstadd_back | adds the element new at the end of the list |
| ft_lstclear | delete and free memory of element passed as argument and all following arguments |
| ft_lstsize | count number of element in a list |
| ft_lstlast | return last element of a list |



#### For more info, you can visit the following:
	
	https://42tokyo.jp/ (Tokyo Campus)   |    https://42.fr/en/ (Main campus website) | https://en.wikipedia.org/wiki/42_(school)
