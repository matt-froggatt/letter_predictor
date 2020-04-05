cmake_minimum_required(VERSION 3.10)

# set the project name
project("Letter Predictor" VERSION 383087849)

# add the executable

add_executable(letter_predictor main.c predictor.h predictor.c display.h display.c)
