add_library(CarteLib Carte.cpp Carte.hpp)

target_include_directories(CarteLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(CarteLib PUBLIC DetaliiLib)  #dependenta dintre Editura si Carte

target_include_directories(CarteLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../Detalii)