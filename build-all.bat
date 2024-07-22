@ECHO OFF
REM Build Everything

ECHO "Building everything..."

REM Engine
make -f "Makefile.engine.windows.mak"
IF %ERRORLEVEL% NEQ 0 (echo Error:%ERRORLEVEL% && exit)

REM testbed
make -f "Makefile.testbed.windows.mak"
IF %ERRORLEVEL% NEQ 0 (echo Error:%ERRORLEVEL% && exit)

ECHO "All assemblies built successfully."