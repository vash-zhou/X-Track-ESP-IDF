file(GLOB_RECURSE SOURCE ./*.cpp)

idf_component_register(	
		SRCS 			${SOURCE}
		INCLUDE_DIRS 	"."
		REQUIRES 		MY_HAL DataCenter Config Time Filters MapConv StorageService GPX TrackFilter Version PointContainer
)
