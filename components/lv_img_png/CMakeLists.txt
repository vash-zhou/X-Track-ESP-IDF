file(GLOB_RECURSE SOURCE ./*.cpp ./PNGdec/src/*.cpp ./PNGdec/src/*.c)

idf_component_register(	
		SRCS 			${SOURCE}
		INCLUDE_DIRS 	"." "./PNGdec/src"
		REQUIRES 		lvgl
)
