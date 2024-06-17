#!/bin/bash
# Build script for rebuilding everything
set echo on

echo "Building everything..."


pushd engine
source build.sh

ERRORLEVEL=$?
if [ $ERRORLEVEL -ne 0 ]
then
echo "Error:"$ERRORLEVEL && exit
fi

popd

pushd testbed
source build.sh
ERRORLEVEL=$?
if [ $ERRORLEVEL -ne 0 ]
then
echo "Error:"$ERRORLEVEL && exit
fi

popd

echo "All assemblies built successfully.\n"
