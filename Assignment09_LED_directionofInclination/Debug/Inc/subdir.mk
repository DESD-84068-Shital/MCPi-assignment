################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Inc/i2c.c \
../Inc/i2c_lcd.c \
../Inc/lis3dsh.c \
../Inc/spi.c 

OBJS += \
./Inc/i2c.o \
./Inc/i2c_lcd.o \
./Inc/lis3dsh.o \
./Inc/spi.o 

C_DEPS += \
./Inc/i2c.d \
./Inc/i2c_lcd.d \
./Inc/lis3dsh.d \
./Inc/spi.d 


# Each subdirectory must supply rules for building sources it contributes
Inc/%.o Inc/%.su Inc/%.cyclo: ../Inc/%.c Inc/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F407G_DISC1 -DSTM32F4 -DSTM32F407VGTx -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Inc

clean-Inc:
	-$(RM) ./Inc/i2c.cyclo ./Inc/i2c.d ./Inc/i2c.o ./Inc/i2c.su ./Inc/i2c_lcd.cyclo ./Inc/i2c_lcd.d ./Inc/i2c_lcd.o ./Inc/i2c_lcd.su ./Inc/lis3dsh.cyclo ./Inc/lis3dsh.d ./Inc/lis3dsh.o ./Inc/lis3dsh.su ./Inc/spi.cyclo ./Inc/spi.d ./Inc/spi.o ./Inc/spi.su

.PHONY: clean-Inc

