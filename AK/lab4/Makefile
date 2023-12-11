ifneq ($(KERNELRELEASE),)
# kbuild part of makefile
obj-m   += hello1.o hello2.o
else
# normal makefile
KDIR ?= /lib/modules/`uname -r`/build
PWD := $(shell pwd)

ccflags-y += -I$(PWD)/inc

default:
	$(MAKE) -C $(KDIR) M=$(PWD) modules

clean:
	$(MAKE) -C $(KDIR) M=$(PWD) clean

endif
