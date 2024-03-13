# LIBFT
## Tu primera librería
Este proyecto consiste en programar una librería en C.
"Tu librería tendrá un montón de funciones de propósito general en las que se apoyarán tus programas"

Lista de funciones a implementar:
- toupper
- isalpha
- isdigit
- tolower
- isalnum
- isascii
- strchr
- isprint
- strrchr
- strlen
- strncmp
- memset
- bzero
- memchr
- memcpy
- memcmp
- memmove
- strnstr
- strlcpy
- strlcat
- atoi

- calloc
- strdup


Funciones adicionales:
- ft_substr
- ft_strjoin
- ft_strtrim
- ft_split
- ft_itoa
- ft_strmapi
- ft_striteri
- ft_putchar_fd
- ft_putstr_fd
- ft_putendl_fd
- ft_putnbr_fd



PARTE BONUS
Si completas la parte obligatoria, no dudes en llevarla más lejos haciendo esta parte
extra. Te dará puntos adicionales si la completas correctamente.
Las funciones para manipular memoria y strings son muy útiles... Pero pronto des-
cubrirás que la manipulación de listas lo es incluso más.
Deberás utilizar la siguiente estructura para representar un nodo de tu lista. Añade
la declaración a tu archivo libft.h:
    typedef struct          s_list
    {
        void                *content;
        struct              *next;
    }                       t_list;
    
    
Los miembros de la estructura t_list son:
- content: la información contenida por el nodo.
-     void *: permite guardar cualquier tipo de información.

- next: la dirección del siguiente nodo, o NULL si el siguiente nodo es el último.
En tu Makefile, añade una regla make bonus que incorpore las funciones bonus a tu
libft.a.
