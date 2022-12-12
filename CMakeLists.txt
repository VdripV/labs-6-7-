cmake_minimum_required(VERSION 3.15) 


set(PROJECT_NAME testProject)				 		 
project("${PROJECT_NAME}")			 	


set(CMAKE_CXX_STANDARD 17)			 
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)
			 

add_executable("${PROJECT_NAME}" Лабораторная работа №6.cpp			 					 
			         coutFOO.cpp
				   coutFOO.hpp
			         findFOO.cpp
			         findFOO.hpp
                 	         readFOO.cpp
			         readFOO.hpp
			         sortFOO.cpp
				   sortFOO.hpp)