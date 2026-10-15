# Zero2W Industrial Telemetry OS

Custom Embedded Linux distribution built from scratch using Buildroot for the Raspberry Pi Zero 2 W (ARM64 Cortex-A53).

## Project Goals
- Build a minimal, fast-booting Linux image using **Buildroot**.
- Implement custom **Kernel Space Character Device Drivers** in C.
- Establish robust communication between hardware sensors and user space applications.

## Architecture
- **Host OS:** Ubuntu Linux (Cross-compilation environment)
- **Target Hardware:** Raspberry Pi Zero 2 W (BCM2710A1)
- **Kernel:** Custom Linux configuration optimized for low memory footprint.

## Status
- [x] Sprint 1: Custom Buildroot Toolchain & Base Image Boot
- [ ] Sprint 2: Kernel Module 'Hello World' & Out-of-Tree Makefile
- [ ] Sprint 3: I2C Subsystem & MPU6050 Character Driver
- [ ] Sprint 4: User Space Telemetry Daemon & UDP Socket Stream
