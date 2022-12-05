if(WIN32)
set(VCPKG_ROOT "D:/src/vcpkg/scripts/buildsysyems/vcpkg.cmake" CACHE PATH "")
set(CMAKE_TOOLCHAIN_FILE ${VCPKG_ROOT})
include(d:/src/vcpkg/scripts/buildsystems/vcpkg.cmake)
endif()
project(server)
if(WIN32)
message("windows")
set(Qt6_DIR D:/Qt/6.4.0/msvc2019_64)
#set(CMAKE_PREFIX_PATH D:/Qt/6.4.0/msvc2019_64)
else()
message("linux")
set(CMAKE_PREFIX_PATH /home/pi/qt6Host)
endif()

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Core HttpServer Multimedia Sql)

#find_package(pybind11 CONFIG REQUIRED)
find_package(OpenCV CONFIG REQUIRED)
#find_package(unofficial-sqlite3 CONFIG REQUIRED)
find_package(unofficial-sqlite3 CONFIG REQUIRED)
add_executable(${PROJECT_NAME} main.cpp  "WebServer.h" "WebServer.cpp" "SongManager.h" "SongManager.cpp" "Player.h" "Player.cpp" "SqlManager.h" "SqlManager.cpp")

#target_link_libraries(${PROJECT_NAME} PRIVATE libevent::core libevent::extra)#链接第三方库


target_link_libraries(
	${PROJECT_NAME}
	Util
	unofficial::sqlite3::sqlite3
	Qt6::Core
	Qt6::HttpServer
	Qt6::Multimedia
	Qt6::Sql)

target_include_directories(${PROJECT_NAME} PUBLIC C:/dev/ningyuan/util)
