################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../hal/KEYPAD.c \
../hal/Lcd.c \
../hal/SERVO.c \
../hal/timer.c 

OBJS += \
./hal/KEYPAD.o \
./hal/Lcd.o \
./hal/SERVO.o \
./hal/timer.o 

C_DEPS += \
./hal/KEYPAD.d \
./hal/Lcd.d \
./hal/SERVO.d \
./hal/timer.d 


# Each subdirectory must supply rules for building sources it contributes
hal/KEYPAD.o: ../hal/KEYPAD.c
	arm-none-eabi-gcc -gdwarf-2 "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -DDEBUG -c -I"D:/learn in depth Assignment/Debugging/smart/Smart_Parking/hal/Incl" -I../Inc -I"D:/learn in depth Assignment/Debugging/smart/Smart_Parking/mcal/Incl" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"hal/KEYPAD.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
hal/Lcd.o: ../hal/Lcd.c
	arm-none-eabi-gcc -gdwarf-2 "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -DDEBUG -c -I"D:/learn in depth Assignment/Debugging/smart/Smart_Parking/hal/Incl" -I../Inc -I"D:/learn in depth Assignment/Debugging/smart/Smart_Parking/mcal/Incl" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"hal/Lcd.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
hal/SERVO.o: ../hal/SERVO.c
	arm-none-eabi-gcc -gdwarf-2 "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -DDEBUG -c -I"D:/learn in depth Assignment/Debugging/smart/Smart_Parking/hal/Incl" -I../Inc -I"D:/learn in depth Assignment/Debugging/smart/Smart_Parking/mcal/Incl" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"hal/SERVO.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
hal/timer.o: ../hal/timer.c
	arm-none-eabi-gcc -gdwarf-2 "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -DDEBUG -c -I"D:/learn in depth Assignment/Debugging/smart/Smart_Parking/hal/Incl" -I../Inc -I"D:/learn in depth Assignment/Debugging/smart/Smart_Parking/mcal/Incl" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"hal/timer.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

