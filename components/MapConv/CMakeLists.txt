file(GLOB_RECURSE SOURCE ./*.cpp ./TileSystem/*.cpp ./GPS_Transform/*.c)

idf_component_register(	
		SRCS 			${SOURCE}
		INCLUDE_DIRS 	"." "./TileSystem" "./GPS_Transform"
)
