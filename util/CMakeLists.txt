if(WIN32)
message("windows ")
set(Qt6_DIR D:/Qt/6.4.0/msvc2019_64)
else()
message("linux")
set(CMAKE_PREFIX_PATH /home/pi/qt6Host)
endif()

project(Util)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Core HttpServer Multimedia Sql)
add_library(${PROJECT_NAME} Util.h Util.cpp "NetWork.h" "NetWork.cpp" "Entry.h" "Entry.cpp" "Common.h")

target_link_libraries(
	${PROJECT_NAME}
	#unofficial::sqlite3::sqlite3
	Qt6::Core
	Qt6::HttpServer
	Qt6::Multimedia
	Qt6::Sql
)