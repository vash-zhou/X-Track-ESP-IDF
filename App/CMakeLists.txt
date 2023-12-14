file(GLOB_RECURSE SOURCE ./*.cpp
./Pages/*.cpp 
./Pages/_Template/*.cpp 
./Pages/Dialplate/*.cpp 
./Pages/LiveMap/*.cpp 
./Pages/StartUp/*.cpp 
./Pages/StatusBar/*.cpp
./Pages/SystemInfos/*.cpp
./Resource/*.cpp
./Resource/Font/*.c
./Resource/Image/*.c)

idf_component_register(	
		SRCS 			${SOURCE}
		INCLUDE_DIRS 	"."
		            	"./Pages"
		                "./Pages/_Template"
						"./Pages/Dialplate"
						"./Pages/LiveMap"
						"./Pages/StartUp"
						"./Pages/StatusBar"
						"./Pages/SystemInfos"
						"./Resource"
						"./Resource/Font"
						"./Resource/Image"
		 REQUIRES        lvgl
		 				 lv_ext
						 ArduinoAPI
						 ArduinoJson
						 Config
						 DataCenter
						 DataProc
						 Filters
						 GPX
						 GPX_Parser
						 lv_allocator
						 lv_anim_label
						 lv_img_png
						 lv_poly_line
						 MapConv
						 Music
						 MY_HAL
						 PageManager
						 PointContainer
						 ResourceManager
						 StorageService
						 TileConv
						 Time
						 TonePlayer
						 TrackFilter
						 Version
)
