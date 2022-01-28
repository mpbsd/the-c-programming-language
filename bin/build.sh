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
  if [[ -n "$(ls ${ROOT}/bin | egrep '[A-Z0-9]{5}\.o')" ]]
  then
    rm ${ROOT}/bin/*.o
    printf "${ROOT}/bin has been cleared\n"
  else
    printf "${ROOT}/bin is already clean\n"
  fi
}


function help() {
  printf "Basic usage:"
  printf "\n\t./bin/build.sh [-c, --clean]                               # Remove bin/*.o files"
  printf "\n\t./bin/build.sh [-h, --help]                                # Print this help message"
  printf "\n\t./bin/build.sh [-chp, --chapter] 2 [-exr, --exercise] 03   # Compile exercise 03 from chapter 2\n"
}


function error_message() {
  printf "Error: unrecognized options\n"
  printf "Type in ./bin/build.sh [-h, --help] for help\n"
}


if [[ $# -eq 1 ]]
then
  case $1 in
    '-c' | '--clean')
      clean
      ;;
    '-h' | '--help')
      help
      ;;
    *)
      error_message
      ;;
  esac
elif [[ $# -eq 4 ]]
then
  case $1 in
    '-chp' | '--chapter')
      CHP=$2
      case $3 in
        '-exr' | '--exercise')
          EXR=$4
          ;;
      esac
      ;;
    '-exr'| '--exercise')
      EXR=$2
      case $3 in
        '-chp' | '--chapter')
          CHP=$4
          ;;
      esac
      ;;
    *)
      error_message
      ;;
  esac
  if [[ -n $CHP ]] && [[ -n $EXR ]]
  then
    SRC="${ROOT}/chp/${CHP}/exerc/${EXR}.c"
    if [[ -f $SRC ]]
    then
      compile $CHP $EXR
    else
      printf "Error: file\n\n\t$SRC\n\ndoesn't exist\n"
    fi
  else
    error_message
  fi
fi


exit 0
