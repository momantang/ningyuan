if(WIN32)
set(VCPKG_ROOT "D:/src/vcpkg/scripts/buildsysyems/vcpkg.cmake" CACHE PATH "")
set(CMAKE_TOOLCHAIN_FILE ${VCPKG_ROOT})
include(d:/src/vcpkg/scripts/buildsystems/vcpkg.cmake)
endif()
if(WIN32)
message("windows ")
set(Qt6_DIR D:/Qt/6.4.0/msvc2019_64)
include_directories(c:/dev/ningyuan/Util)

else()
message("linux")
set(CMAKE_PREFIX_PATH /home/pi/qt6Host)
endif()


project(app)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Core HttpServer Multimedia Sql Widgets)

#find_package(pybind11 CONFIG REQUIRED)
find_package(OpenCV CONFIG REQUIRED)

add_executable(${PROJECT_NAME} main.cpp "MainWindow.h" "MainWindow.cpp" "NavigationWidget.h" "NavigationWidget.cpp" "SongWidget.h" "SongWidget.cpp" "RecordWidget.h" "RecordWidget.cpp")

#target_link_libraries(${PROJECT_NAME} PRIVATE libevent::core libevent::extra)#链接第三方库
target_link_libraries(
	${PROJECT_NAME}
    Util
	#unofficial::sqlite3::sqlite3
	Qt6::Core
	Qt6::HttpServer
	Qt6::Multimedia
	Qt6::Sql
	Qt6::Widgets
)
