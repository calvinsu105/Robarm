################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
..\src/Robarm.c \
..\src/arm_setup.c \
..\src/dbsct.c \
..\src/function.c \
..\src/interrupt_handlers.c \
..\src/pwm.c \
..\src/reset_program.c \
..\src/sbrk.c \
..\src/vector_table.c 

C_DEPS += \
./src/Robarm.d \
./src/arm_setup.d \
./src/dbsct.d \
./src/function.d \
./src/interrupt_handlers.d \
./src/pwm.d \
./src/reset_program.d \
./src/sbrk.d \
./src/vector_table.d 

OBJS += \
./src/Robarm.obj \
./src/arm_setup.obj \
./src/dbsct.obj \
./src/function.obj \
./src/interrupt_handlers.obj \
./src/pwm.obj \
./src/reset_program.obj \
./src/sbrk.obj \
./src/vector_table.obj 


# Each subdirectory must supply rules for building sources it contributes
src/%.obj: ../src/%.c
	@echo 'Scanning and building file: $<'
	@echo 'Invoking: Scanner and Compiler'
	ccrx  -MM -MP -output=dep="$(@:%.obj=%.d)" -MT="$(@:%.obj=%.obj)" -MT="$(@:%.obj=%.d)" -lang=c99   -include="C:\PROGRA~2\Renesas\RX\2_6_0/include"  -debug -nomessage -isa=rxv2 -fpu -nologo  -define=__RX=1   "$<"
	ccrx -lang=c99 -output=obj="$(@:%.d=%.obj)"  -include="C:\PROGRA~2\Renesas\RX\2_6_0/include"  -debug -nomessage -isa=rxv2 -fpu -nologo  -define=__RX=1   "$<"
	@echo 'Finished scanning and building: $<'
	@echo.

