################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
C:/Users/Jonas/Dropbox/Studium/PREN/Workspace/PrenLib/TimerOne/TimerOne.cpp 

OBJS += \
./TimerOne/TimerOne.o 

CPP_DEPS += \
./TimerOne/TimerOne.d 


# Each subdirectory must supply rules for building sources it contributes
TimerOne/TimerOne.o: C:/Users/Jonas/Dropbox/Studium/PREN/Workspace/PrenLib/TimerOne/TimerOne.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: AVR C++ Compiler'
	avr-g++ -I"C:\Users\Jonas\Dropbox\Studium\PREN\arduino-1.0.3\hardware\arduino\cores\arduino" -I"C:\Users\Jonas\Dropbox\Studium\PREN\arduino-1.0.3\hardware\arduino\variants\eightanaloginputs" -I"C:\Users\Jonas\Dropbox\Studium\PREN\Workspace\ParQ" -I"C:\Users\Jonas\Dropbox\Studium\PREN\Workspace\PrenLib\TimerOne" -D__IN_ECLIPSE__=1 -DUSB_VID= -DUSB_PID= -DARDUINO=103 -Wall -Os -ffunction-sections -fdata-sections -fno-exceptions -g -mmcu=atmega328p -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)"  -c -o "$@" -x c++ "$<"
	@echo 'Finished building: $<'
	@echo ' '


