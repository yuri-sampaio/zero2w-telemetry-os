obj-m += hello_kmod.o

BUILDROOT_DIR := $(HOME)/embarcados/buildroot
KERNEL_DIR    := $(wildcard $(BUILDROOT_DIR)/output/build/linux-custom*)
CROSS_PREFIX  := $(BUILDROOT_DIR)/output/host/bin/aarch64-linux-

all:
	$(MAKE) ARCH=arm64 CROSS_COMPILE=$(CROSS_PREFIX) -C $(KERNEL_DIR) M=$(PWD) modules

clean:
	$(MAKE) ARCH=arm64 CROSS_COMPILE=$(CROSS_PREFIX) -C $(KERNEL_DIR) M=$(PWD) clean
