file(GLOB_RECURSE SOURCE ./*.cpp)

idf_component_register(	
		SRCS 			${SOURCE}
		INCLUDE_DIRS 	"."
		REQUIRES 		lvgl ArduinoJson
)
