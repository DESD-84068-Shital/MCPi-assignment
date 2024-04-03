################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Inc/eeprom.c \
../Inc/i2c.c \
../Inc/uart.c 

OBJS += \
./Inc/eeprom.o \
./Inc/i2c.o \
./Inc/uart.o 

C_DEPS += \
./Inc/eeprom.d \
./Inc/i2c.d \
./Inc/uart.d 


# Each subdirectory must supply rules for building sources it contributes
Inc/%.o Inc/%.su Inc/%.cyclo: ../Inc/%.c Inc/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F407G_DISC1 -DSTM32F4 -DSTM32F407VGTx -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Inc

clean-Inc:
	-$(RM) ./Inc/eeprom.cyclo ./Inc/eeprom.d ./Inc/eeprom.o ./Inc/eeprom.su ./Inc/i2c.cyclo ./Inc/i2c.d ./Inc/i2c.o ./Inc/i2c.su ./Inc/uart.cyclo ./Inc/uart.d ./Inc/uart.o ./Inc/uart.su

.PHONY: clean-Inc

