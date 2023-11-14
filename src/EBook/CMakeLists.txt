add_library(EBookLib EBook.cpp EBook.hpp)

target_include_directories(EBookLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(EBookLib PUBLIC CarteLib DetaliiLib)  #dependenta dintre Editura si Carte

target_include_directories(EBookLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../Carte)

target_include_directories(EBookLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../Detalii)