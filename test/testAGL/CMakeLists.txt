#
# Advanced Simulation Library <http://asl.org.il>
# 
# Copyright 2015 Avtech Scientific <http://avtechscientific.com>
#
#
# This file is part of Advanced Simulation Library (ASL).
#
# ASL is free software: you can redistribute it and/or modify it
# under the terms of the GNU Affero General Public License as
# published by the Free Software Foundation, version 3 of the License.
#
# ASL is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
# GNU Affero General Public License for more details.
#
# You should have received a copy of the GNU Affero General Public License
# along with ASL. If not, see <http://www.gnu.org/licenses/>.
#

# Disable this test for now, until we decide to distribute
# the input data (`bus.stl` in this case) along with ASL

# include_directories(${CMAKE_SOURCE_DIR}/src)

# add_executable(testVTK_IO testVTK_IO.cc)
# target_link_libraries(testVTK_IO aslnum aslvtk asl)
# add_test(NAME testVTK_IO COMMAND testVTK_IO)
# set_tests_properties(testVTK_IO PROPERTIES LABELS IO)
# Hardcode the path to the required input file `bus.stl`
# (tests are not installed, so no need to be relocatable)
# alternatively `bus.stl` can be copied to the test directory
# by cmake (configure_file() for a configuration time copy or add_custom_command() for a build time copy)
# target_compile_definitions(testVTK_IO PRIVATE "INPUT_DATA_DIR=\"${CMAKE_SOURCE_DIR}/input_data/\"")