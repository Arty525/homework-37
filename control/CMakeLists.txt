cmake_minimum_required (VERSION 3.8)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

project ("control")

set(CMAKE_PREFIX_PATH "D:\\Qt\\5.12.12\\msvc2017_64\\lib\\cmake")

find_package(Qt5 COMPONENTS
		Core
		Gui
		Widgets
		REQUIRED
		)

add_executable (control "control.cpp" "control.ui" "control.h")
target_link_libraries(control
		Qt5::Widgets
		Qt5::Gui
		Qt5::Core
		)

foreach (QT_LIB Qt5Widgets Qt5Gui Qt5Core libGLESv2)
	add_custom_command(TARGET control POST_BUILD
			COMMAND ${CMAKE_COMMAND} -E copy
			"D:\\Qt\\5.12.12\\msvc2017_64\\bin\\${QT_LIB}d.dll"
			"$<TARGET_FILE_DIR:control>")
endforeach (QT_LIB)
