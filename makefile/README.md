# Makefiles

GNU make is an easy way to build applications (especially large ones).

To use a makefile, the following syntax is used:

```make
target: dependencies
	command to build
...
```

After saving that as a file named `Makefile` in your project directory, it can be compiled with:

```sh
make target
```
