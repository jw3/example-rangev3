include(ExternalProject)

set(RANGEV3_INSTALL RangeV3)

ExternalProject_Add(
        ${RANGEV3_INSTALL}
        URL https://github.com/ericniebler/range-v3/archive/master.zip
        CONFIGURE_COMMAND ""
        BUILD_COMMAND ""
        UPDATE_COMMAND ""
        INSTALL_COMMAND ""
        LOG_DOWNLOAD ON
        LOG_CONFIGURE ON
        LOG_BUILD ON)

ExternalProject_Get_Property(${RANGEV3_INSTALL} source_dir binary_dir)
message(STATUS "RangeV3: ${source_dir}")

set(RangeV3_INCLUDE_DIR "${source_dir}/include")

