@ECHO Off
SET COMPILER_DIR=..\..\Compiler
SET EMULATOR_DIR=..\..\Emulators
SET JO_ENGINE_SRC_DIR=../../jo_engine

IF %1" == "clean" GOTO CLEAN
IF %1" == "run" GOTO RUNGAME
IF NOT EXIST game.is GOTO :COMPILE

:CLEAN
rm -f ./cd/0.bin
rm -f *.o
rm -f %JO_ENGINE_SRC_DIR%/*.o
rm -f ./*.bin
rm -f ./*.coff
rm -f ./*.elf
rm -f ./*.map
rm -f ./*.iso
rm -f ./*.cue
ECHO "Clean Done"
IF %1" == "clean" GOTO END

:COMPILE
SET PATH=%COMPILER_DIR%\WINDOWS\Other Utilities;%COMPILER_DIR%\WINDOWS\bin;%PATH%
make re
IF NOT "%1" == "run" GOTO END

:RUNGAME
IF EXIST game.cue "%EMULATOR_DIR%\mednafen\mednafen.exe" game.cue -sound.volume "150"
IF NOT EXIST game.cue GOTO ERROR
GOTO END

:ERROR
ECHO "Error occured"

:END