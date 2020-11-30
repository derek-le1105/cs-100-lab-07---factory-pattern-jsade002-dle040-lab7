CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

ADD_SUBDIRECTORY(googletest)

SET(CMAKE_CXX_STANDARD 11)

ADD_EXECUTABLE(test  
    list_container.cpp
    VectorContainer.cpp
    unit_test.cpp
    SelectionSort.cpp
    bubble_sort.cpp

)

ADD_EXECUTABLE(lab
    main.cpp
)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)

