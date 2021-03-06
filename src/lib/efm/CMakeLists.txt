include_directories(
  ${EINA_INCLUDE_DIRS}
  ${EIO_INCLUDE_DIRS}
  ${EEZE_INCLUDE_DIRS}
  ${EFREET_MIME_INCLUDE_DIRS}
  ${ECORE_FILE_INCLUDE_DIRS}
)

set (EMOUS_MODULE_PATH "${CMAKE_INSTALL_PREFIX}/lib/emous/")

LIST(APPEND FM_MONITOR
   efm.eot
   efm.eot.h
   fm_monitor.c
   efm_monitor.c
   efm_monitor.eo
   efm_monitor.eo.x
   efm_monitor.eo.h
   efm_file.c
   efm_file.eo
   efm_file.eo.x
   efm_file.eo.h
   efm_filter.c
   efm_filter.eo
   efm_filter.eo.x
   efm_filter.eo.h
   archive.c
   main.c
   Efm.h
   efm_priv.h
   )

list(APPEND FM_DEPS
  ./
)

eo_rule_create("${FM_MONITOR}" "${FM_DEPS}")

add_library(efm_lib SHARED ${FM_MONITOR})

target_link_libraries(efm_lib
  ${EINA_LIRBRARIES}
  ${EIO_LIBRARIES}
  ${ECORE_LIBRARIES}
  ${EEZE_LIBRARIES}
  ${ECORE_FILE_LIBRARIES}
  ${EFREET_MIME_LIBRARIES}
  ${LibArchive_LIBRARIES}
)

set_property(TARGET efm_lib
   PROPERTY COMPILE_DEFINITIONS ${RESOLVER_DIR_DEFINITION})

INSTALL(TARGETS efm_lib
  LIBRARY DESTINATION lib
)
INSTALL(FILES Efm.h efm_file.eo.h efm_monitor.eo.h DESTINATION include/efm-1/)