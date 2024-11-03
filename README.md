<h1 align="center"> 
Commom Core 42 - Libft
</h1>
<p align="center">
<img src="https://github.com/tmatheusdiniz/42_libft/releases/download/images/libft.jpeg" alt="Imagem da Libft" width="600">
</P>

<p align="center">
    <strong>This is the first project that 42 students have done since joining the course</strong>
</p>

<h3 align="center">
    <a href="#-index">Index</a>
    <span> · </span>
    <a href="#FFD700-about">About</a>
    <span> · </span>
<h3/>

## 📖 Libft

This project has not yet graduated.

## 🗣️ About

This project consist of recreating many of the functions standard and non-standard c libraries.

**Libraries used as support**

Funcitons from libraries such as <stdlib.h>, <string.h>, <strings.h> and <ctype.h> were used. In additon, as you can see, non-standard library functions have also been used.

### Functions from `<stdlib.h>` library

* [`ft_atoi`](src/ft_atoi.c)		- convert ASCII string to integer.
* [`ft_calloc`](src/ft_calloc.c)	- memory allocation.

### Functions from `<string.h>` library

* [`ft_strlen`](src/ft_strlen.c)				- find length of string.
* [`ft_strchr`](src/ft_strchr.c)				- locate character in string (first occurrence).
* [`ft_strrchr`](src/ft_strrchr.c)			- locate character in string (last occurence).
* [`ft_strstr`](src/ft_strstr.c) 		- locate a substring in a string.
* [`ft_strnstr`](src/ft_strnstr.c)			- locate a substring in a string (size-bounded).
* [`ft_strcmp`](src/ft_strcmp.c) 		- compare strings.
* [`ft_strncmp`](src/ft_strncmp.c) 			- compare strings (size-bounded).
* [`ft_strlcpy`](src/ft_strlcpy.c)			- size-bounded string copying.
* [`ft_strlcat`](src/ft_strlcat.c)			- size-bounded string concatenation.

### Functions from `<strings.h>` library

* [`ft_bzero`](src/ft_bzero.c)		- write zeroes to a byte string.
* [`ft_memccpy`](src/ft_memccpy.c)	- copy string until character found.
* [`ft_memchr`](src/ft_memchr.c)		- locate byte in byte string.
* [`ft_memcmp`](src/ft_memcmp.c)		- compare byte string.
* [`ft_memcpy`](src/ft_memcpy.c)		- copy memory area.
* [`ft_memmove`](src/ft_memmove.c)	- copy byte string.
* [`ft_memset`](src/ft_memset.c)		- write a byte to a byte string.


### Functions from `<ctype.h>` library

* [`ft_isalnum`](src/ft_isalnum.c)			- alphanumeric character test.
* [`ft_isascii`](src/ft_isascii.c)			- test for ASCII character.
* [`ft_isalpha`](src/ft_isalpha.c)			- alphabetic character test.
* [`ft_islower`](src/ft_islower.c) 	- lower-case character test.
* [`ft_isupper`](src/ft_isupper.c) 	- upper-case character test.
* [`ft_isdigit`](src/ft_isdigit.c)			- decimal-digit character test.
* [`ft_isprint`](src/ft_isprint.c)			- printing character test.
* [`ft_tolower`](src/ft_tolower.c)			- upper case to lower case letter conversion.
* [`ft_toupper`](src/ft_toupper.c)			- lower case to upper case letter conversion.

### Non-standard functions

* [`ft_putchar_fd`](src/ft_putchar_fd.c)		- output a character to given file.
* [`ft_putstr_fd`](src/ft_putstr_fd.c)		- output string to given file.
* [`ft_putendl_fd`](src/ft_putendl_fd.c)		- output string to given file with newline.
* [`ft_putnbr_fd`](src/ft_putnbr_fd.c)		- output integer to given file.
* [`ft_itoa`](src/t_itoa.c)					- convert integer to ASCII string.
* [`ft_substr`](src/ft_substr.c)				- extract substring from string.
* [`ft_strtrim`](src/ft_strtrim.c)			- trim beginning and end of string with the specified characters.
* [`ft_strjoin`](src/ft_strjoin.c)			- concatenate two strings into a new string (with malloc).
* [`ft_split`](src/ft_split.c)				- split string, with specified character as delimiter, into an array of strings.
* [`ft_strmapi`](src/ft_strmapi.c)			- create new string from modifying string with specified function.

  ### Linked list functions

* [`ft_lstnew`](srcs/ft_lstnew.c)				- create new list.
* [`ft_lstsize`](srcs/ft_lstsize.c)			- count elements of a list.
* [`ft_lstlast`](srcs/ft_lstlast.c)			- find last element of list.
* [`ft_lstadd_back`](srcs/ft_lstadd_back.c)	- add new element at end of list.
* [`ft_lstadd_front`](srcs/ft_lstadd_front.c)	- add new element at beginning of list.
* [`ft_lstdelone`](srcs/ft_lstdelone.c)		- delete element from list.
* [`ft_lstclear`](srcs/ft_lstclear.c)			- delete sequence of elements of list from a starting point.
* [`ft_lstiter`](srcs/ft_lstiter.c)			- apply function to content of all list's elements.
* [`ft_lstmap`](srcs/ft_lstmap.c)				- apply function to content of all list's elements into new list.

## 🛠️ Resources

[42-Gitbook](https://42-cursus.gitbook.io/guide)

[Makefile tutor](https://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/)

## Instructions



