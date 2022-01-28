#!/usr/bin/env zsh
# build.sh


ROOT="${HOME}/projects/the-c-programming-language"


function compile() {
  CHP=$1
  EXR=$2

  SRC="${ROOT}/chp/${CHP}/exerc/${EXR}.c"
  OBJ="${ROOT}/bin/C${CHP}E${EXR}.o"

  cc -g -Wall -O3 $SRC -o $OBJ
}


function clean() {
  if [ -z "$(ls ${ROOT}/bin | egrep '[A-Z0-9]{5}\.o')" ]
  then
    printf "${ROOT}/bin is already clean\n"
  else
    rm ${ROOT}/bin/*.o
    printf "${ROOT}/bin has been cleared\n"
  fi
}

function help() {
  printf "print a help message\n"
}

exit 0
