################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../mcal/exti.c \
../mcal/gpio.c \
../mcal/rcc.c \
../mcal/uart.c 

OBJS += \
./mcal/exti.o \
./mcal/gpio.o \
./mcal/rcc.o \
./mcal/uart.o 

C_DEPS += \
./mcal/exti.d \
./mcal/gpio.d \
./mcal/rcc.d \
./mcal/uart.d 


# Each subdirectory must supply rules for building sources it contributes
mcal/exti.o: ../mcal/exti.c
	arm-none-eabi-gcc -gdwarf-2 "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -DDEBUG -c -I"D:/learn in depth Assignment/Debugging/smart/Smart_Parking/hal/Incl" -I../Inc -I"D:/learn in depth Assignment/Debugging/smart/Smart_Parking/mcal/Incl" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"mcal/exti.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
mcal/gpio.o: ../mcal/gpio.c
	arm-none-eabi-gcc -gdwarf-2 "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -DDEBUG -c -I"D:/learn in depth Assignment/Debugging/smart/Smart_Parking/hal/Incl" -I../Inc -I"D:/learn in depth Assignment/Debugging/smart/Smart_Parking/mcal/Incl" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"mcal/gpio.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
mcal/rcc.o: ../mcal/rcc.c
	arm-none-eabi-gcc -gdwarf-2 "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -DDEBUG -c -I"D:/learn in depth Assignment/Debugging/smart/Smart_Parking/hal/Incl" -I../Inc -I"D:/learn in depth Assignment/Debugging/smart/Smart_Parking/mcal/Incl" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"mcal/rcc.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
mcal/uart.o: ../mcal/uart.c
	arm-none-eabi-gcc -gdwarf-2 "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -DDEBUG -c -I"D:/learn in depth Assignment/Debugging/smart/Smart_Parking/hal/Incl" -I../Inc -I"D:/learn in depth Assignment/Debugging/smart/Smart_Parking/mcal/Incl" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"mcal/uart.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

