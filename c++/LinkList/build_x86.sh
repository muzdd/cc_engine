#!/bin/bash

if [ $# -eq 1 ]; then
  export INSTALL_PREFIX=$1
else
  echo "please specify the install path"
  echo "$0 installPath"
  exit -1
fi

mkdir -p build_linux_x86
pushd build_linux_x86

cmake ..
make VERBOSE=1
popd
exit 0

