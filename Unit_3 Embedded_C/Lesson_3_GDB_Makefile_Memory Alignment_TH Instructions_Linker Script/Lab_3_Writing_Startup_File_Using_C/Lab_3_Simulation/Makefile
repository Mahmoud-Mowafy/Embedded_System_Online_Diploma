#@copyright : Mowafey
# $(Project_name) Lesson_3 Lab_3 Embedded_C

CC=arm-none-eabi-
cFLAGS= -mcpu=cortex-m3 -gdwarf-2
INCS= -I .
LIBS=
SRC= $(wildcard *.c)	# $(wildcard folderName/ *.c)
OBJ= $(SRC:.c=.o)

As= $(wildcard *.s)  
AsOBJ= $(As:.s=.o)

Project_name=Lab_3
all: $(Project_name).bin
	@echo "======================== Build Is Done =========================="

%.o: %.c
	$(CC)gcc.exe  $(INCS) $(cFLAGS) -c $< -o $@

%.o: %.s
	$(CC)as.exe  $(cFLAGS) $< -o $@

$(Project_name).elf: $(OBJ) $(AsOBJ)
	$(CC)ld.exe -T linker_script.ld $(OBJ) $(AsOBJ) -o $@ -Map=Map_file.map

$(Project_name).bin: $(Project_name).elf
	$(CC)objcopy.exe -O binary $< $@ 

clean:
	rm *.elf *.bin 
clean_all: 
	rm *.o *.elf *.bin