##########################################################################################################################
# File automatically-generated by tool: [projectgenerator] version: [2.27.0] date: [Thu Mar 15 15:36:55 EDT 2018] 
##########################################################################################################################

# ------------------------------------------------
# Generic Makefile (based on gcc)
#
# ChangeLog :
#	2017-02-10 - Several enhancements + project update mode
#   2015-07-22 - first version
# ------------------------------------------------

######################################
# target
######################################
TARGET = Project_STM32CubeMX


######################################
# building variables
######################################
# debug build?
DEBUG = 1
# optimization
OPT = -Og


#######################################
# paths
#######################################
# source path
SOURCES_DIR =  \
lib/STM32F4xx_HAL_Driver \
lib/FreeRTOS \
lib/CMSIS \
math \
maze \
module \
peripheral \
system \
board

# Build path
BUILD_DIR = build

######################################
# source
######################################
# C sources
C_SOURCES =  \
lib/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal.c \
lib/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_adc_ex.c \
lib/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_tim.c \
lib/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_rcc_ex.c \
lib/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_gpio.c \
lib/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_spi.c \
lib/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_flash_ramfunc.c \
lib/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_dma_ex.c \
lib/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_pwr.c \
lib/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_adc.c \
lib/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_i2c.c \
lib/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_cortex.c \
lib/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_uart.c \
lib/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_flash_ex.c \
lib/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_rcc.c \
lib/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_flash.c \
lib/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_i2c_ex.c \
lib/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_tim_ex.c \
lib/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_pwr_ex.c \
lib/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_dma.c \
lib/FreeRTOS/Source/portable/MemMang/heap_4.c \
lib/FreeRTOS/Source/event_groups.c \
lib/FreeRTOS/Source/queue.c \
lib/FreeRTOS/Source/list.c \
lib/FreeRTOS/Source/tasks.c \
lib/FreeRTOS/Source/croutine.c \
lib/FreeRTOS/Source/timers.c \
lib/FreeRTOS/Source/portable/GCC/ARM_CM4F/port.c \
lib/FreeRTOS/Source/CMSIS_RTOS/cmsis_os.c \
src/system_stm32f4xx.c \
src/main.c \
src/freertos.c \
src/stm32f4xx_it.c \
src/stm32f4xx_hal_msp.c 

# ASM sources
ASM_SOURCES =  \
startup_stm32f446xx.s

#######################################
# binaries
#######################################
PREFIX = arm-none-eabi-
CC = $(PREFIX)gcc
AS = $(PREFIX)gcc -x assembler-with-cpp
CP = $(PREFIX)objcopy
AR = $(PREFIX)ar
SZ = $(PREFIX)size
HEX = $(CP) -O ihex
BIN = $(CP) -O binary -S
 
#######################################
# CFLAGS
#######################################
# cpu
CPU = -mcpu=cortex-m4

# fpu
FPU = -mfpu=fpv4-sp-d16

# float-abi
FLOAT-ABI = -mfloat-abi=hard

# mcu
MCU = $(CPU) -mthumb $(FPU) $(FLOAT-ABI)

# macros for gcc
# AS defines
AS_DEFS = 

# C defines
C_DEFS =  \
-DUSE_HAL_DRIVER \
-DSTM32F446xx

# AS includes
AS_INCLUDES =  \
-I/inc

# C includes
C_INCLUDES =  \
-Iinc \
-Ilib/STM32F4xx_HAL_Driver/Inc \
-Ilib/STM32F4xx_HAL_Driver/Inc/Legacy \
-Ilib/FreeRTOS/Source/portable/GCC/ARM_CM4F \
-Ilib/CMSIS/Device/ST/STM32F4xx/Include \
-Ilib/FreeRTOS/Source/include \
-Ilib/FreeRTOS/Source/CMSIS_RTOS \
-Ilib/CMSIS/Include


# compile gcc flags
ASFLAGS = $(MCU) $(AS_DEFS) $(AS_INCLUDES) $(OPT) -Wall -fdata-sections -ffunction-sections

CFLAGS = $(MCU) $(C_DEFS) $(C_INCLUDES) $(OPT) -Wall -fdata-sections -ffunction-sections

ifeq ($(DEBUG), 1)
CFLAGS += -g -gdwarf-2
endif


# Generate dependency information
CFLAGS += -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)"


#######################################
# LDFLAGS
#######################################
# link script
LDSCRIPT = STM32F446RETx_FLASH.ld

# libraries
LIBS = -lc -lm -lnosys 
LIBDIR = 
LDFLAGS = $(MCU) -specs=nano.specs -T$(LDSCRIPT) $(LIBDIR) $(LIBS) -Wl,-Map=$(BUILD_DIR)/$(TARGET).map,--cref -Wl,--gc-sections

# default action: build all
all: $(BUILD_DIR)/$(TARGET).elf $(BUILD_DIR)/$(TARGET).hex $(BUILD_DIR)/$(TARGET).bin


#######################################
# build the application
#######################################
# list of objects
OBJECTS = $(addprefix $(BUILD_DIR)/,$(notdir $(C_SOURCES:.c=.o)))
vpath %.c $(sort $(dir $(C_SOURCES)))

# build C files
$(BUILD_DIR)/%.o: %.c | $(BUILD_DIR) 
	$(CC) -c $(CFLAGS) -Wa,-a,-ad,-alms=$(BUILD_DIR)/$(notdir $(<:.c=.lst)) $< -o $@

# list of ASM program objects
OBJECTS += $(addprefix $(BUILD_DIR)/,$(notdir $(ASM_SOURCES:.s=.o)))
vpath %.s $(sort $(dir $(ASM_SOURCES)))

# build ASM files
$(BUILD_DIR)/%.o: %.s | $(BUILD_DIR)
	$(AS) -c $(CFLAGS) $< -o $@

$(BUILD_DIR)/$(TARGET).elf: $(OBJECTS)
	$(CC) $(OBJECTS) $(LDFLAGS) -o $@
	$(SZ) $@

$(BUILD_DIR)/%.hex: $(BUILD_DIR)/%.elf | $(BUILD_DIR)
	$(HEX) $< $@
	
$(BUILD_DIR)/%.bin: $(BUILD_DIR)/%.elf | $(BUILD_DIR)
	$(BIN) $< $@	
	
$(BUILD_DIR):
	mkdir $@		

#######################################
# clean up
#######################################
clean:
	-rm -fR .dep $(BUILD_DIR)
  
#######################################
# dependencies
#######################################
-include $(shell mkdir .dep 2>/dev/null) $(wildcard .dep/*)

# *** EOF ***

include openocd.mk  # For flash, debug and gdb targets
