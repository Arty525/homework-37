# CMakeList.txt: проект CMake для button; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

project ("calculator")

set(CMAKE_PREFIX_PATH "C:\\Qt\\Qt5.12.12\\5.12.12\\msvc2017_64\\lib\\cmake")

find_package(Qt5 COMPONENTS
		Core
		Gui
		Widgets
		REQUIRED
		)
# Добавьте источник в исполняемый файл этого проекта.
add_executable (calculator "calculator.cpp" "calculator.ui" "calcmw.h")
target_link_libraries(calculator
		Qt5::Widgets
		Qt5::Gui
		Qt5::Core
		)

foreach (QT_LIB Qt5Widgets Qt5Gui Qt5Core libGLESv2)
	add_custom_command(TARGET calculator POST_BUILD
			COMMAND ${CMAKE_COMMAND} -E copy
			"C:\\Qt\\Qt5.12.12\\5.12.12\\msvc2017_64\\bin\\${QT_LIB}d.dll"
			"$<TARGET_FILE_DIR:calculator>")
endforeach (QT_LIB)
