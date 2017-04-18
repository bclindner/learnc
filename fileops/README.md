# Fileops

Files are referenced by pointers like so:

`FILE *file;`

`fopen` opens a file with a given permission set (see `man 3 fopen` for these perms):

`file = fopen("file.txt","w+");`

`fprintf()` or `fputs()` prints to the file:

```c
fprintf(file,"Hello world!");
fputs(file,"Hello world!");
```

`fclose()` closes the file:

`fclose(file);`
