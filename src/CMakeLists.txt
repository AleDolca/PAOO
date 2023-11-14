add_subdirectory(Carte)
add_subdirectory(Detalii)
add_subdirectory(EBook)
add_subdirectory(Colectie)
# Define the executable
add_executable(MyProject main.cpp)   
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})

target_link_libraries(MyProject PRIVATE DetaliiLib CarteLib EBookLib ColectieLib)

target_include_directories(MyProject PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/Detalii")
target_include_directories(MyProject PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/Carte")
target_include_directories(MyProject PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/EBook")
target_include_directories(MyProject PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/Colectie")