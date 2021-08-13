if %1==clean (GOTO clean) else if %1==make (GOTO make) else (GOTO end)

:make
mingw32-make all
GOTO end

:clean
del /q obj\*.*
del /q bin\main.exe

:end
