SET(DGAMEMESSAGES_TESTS
	"GameMessageTests.cpp")

# Get the folder name and prepend it to the files above
get_filename_component(thisFolderName ${CMAKE_CURRENT_SOURCE_DIR} NAME)
list(TRANSFORM DGAMEMESSAGES_TESTS PREPEND "${thisFolderName}/")

# Export to parent scope
set(DGAMEMESSAGES_TESTS ${DGAMEMESSAGES_TESTS} PARENT_SCOPE)
