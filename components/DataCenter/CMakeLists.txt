file(GLOB_RECURSE SOURCE ./*.cpp ./PingPongBuffer/*.c)

idf_component_register(	
		SRCS 			${SOURCE}
		INCLUDE_DIRS 	"." "./PingPongBuffer"
		REQUIRES 		lvgl
)
