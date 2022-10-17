cmake_minimum_required(VERSION 3.23)
project(tic_tac_toe C)

set(CMAKE_C_STANDARD 99)


add_executable(tic_tac_toe main.c Sources/chooseCase.c Headers/chooseCase.h Sources/roundPlayer.c Headers/roundPlayer.h Sources/boardView.c Headers/boardView.h Sources/endMessage.c Headers/endMessage.h Headers/main.h)
