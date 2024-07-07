#!/bin/bash
# Build script for engine
set echo on

mkdir -p ../bin

# Get a list of all the .c files.
cFilenames=$(find . -type f -name "*.c" -o -name "*.m")

# echo "Files:" $cFilenames

assembly="engine"
compilerFlags="-g -shared -fdeclspec -fPIC -std=c11 -ObjC -dynamiclib -install_name @rpath/bin/lib$assembly.dylib"
# -fms-extensions 
# -Wall -Werror
includeFlags="-Isrc -I$VULKAN_SDK/include"
linkerFlags="-lvulkan -L$VULKAN_SDK/lib -lobjc -framework AppKit -framework QuartzCore"
defines="-D_DEBUG -DKEXPORT"

echo "Building $assembly..."
echo clang $cFilenames $compilerFlags -o ../bin/lib$assembly.dylib $defines $includeFlags $linkerFlags
clang $cFilenames $compilerFlags -o ../bin/lib$assembly.dylib $defines $includeFlags $linkerFlags
