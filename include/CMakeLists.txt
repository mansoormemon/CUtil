set(INCLUDES
    "CUtil/Core.h"
    "CUtil/CUtil.h"
    "CUtil/Version.h")

set(CMAKE_INSTALL_INCLUDEDIR "include")

install(DIRECTORY "${CMAKE_PROJECT_NAME}"
    DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}"
    FILES_MATCHING PATTERN "*.h")
