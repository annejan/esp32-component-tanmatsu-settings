file(GLOB src "src/*.c")

idf_component_register(
	SRCS
		${src}
	INCLUDE_DIRS
		"include"
	REQUIRES
		nvs_flash
)
