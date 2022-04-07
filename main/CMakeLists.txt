idf_component_register(SRCS "main.c"
                    INCLUDE_DIRS ".")

if(CONFIG_DUST_COLLECTOR_VAC)
  target_sources(${COMPONENT_LIB} PRIVATE "vac.c")
elseif(CONFIG_DUST_COLLECTOR_GATE)
  target_sources(${COMPONENT_LIB} PRIVATE "gate.c")
elseif(CONFIG_DUST_COLLECTOR_TOOL)
  target_sources(${COMPONENT_LIB} PRIVATE "tool.c")
elseif(CONFIG_DUST_COLLECTOR_CONTROLLER)
  target_sources(${COMPONENT_LIB} PRIVATE "controller.c")
endif()
