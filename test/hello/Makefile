obj-m += hello_1.o
obj-m += hello_2.o
obj-m += hello_3.o
obj-m += hello_4.o

PWD := $(CURDIR)

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean