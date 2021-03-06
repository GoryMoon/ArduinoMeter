# *** Auto generated Makefile ***
#
#
#       Searduino
#
#  Copyright (C) 2012-2014 Henrik Sandklef      
#                                                                   
# This program is free software; you can redistribute it and/or     
# modify it under the terms of the GNU General Public License       
# as published by the Free Software Foundation; either version 3    
# of the License, or any later version.                             
#                                                                   
#                                                                   
# This program is distributed in the hope that it will be useful,   
# but WITHOUT ANY WARRANTY; without even the implied warranty of    
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the     
# GNU General Public License for more details.                      
#                                                                   
# You should have received a copy of the GNU General Public License 
# along with this program; if not, write to the Free Software       
# Foundation, Inc., 51 Franklin Street, Boston,            
# MA  02110-1301, USA.                                              
#
#

# Set ARDUINO to any of the following
#ARDUINO=stub
#ARDUINO=due
#ARDUINO=uno
#ARDUINO=mega
ARDUINO=uno

#
# Set the variable below if you want to run your code in a simulator
# You can 
# SHLIB=__SHLIB_NAME__

#
# Set the variable below if you want to run your program stand alone
# PROG=__PROG_NAME__

#
# The below is the target you choose to build when you generated this Makefile
#
SHLIB=libarduinometer.so

SHLIB_LIBS=  -lpthread
SRC_C=prog/vumeter.c prog/bindisplay.c
SRC_CXX=  
MAIN_SRC=main.c

#USER_C_FLAGS=
#USER_LD_FLAGS=$(SHLIB_LIBS)

SEARDUINO_PATH=/opt/searduino

all:

simulate:
	$(SEARDUINO_PATH)/bin/searduino-stream.sh --arduino-code ./$(SHLIB)

simulate-gui:
	$(SEARDUINO_PATH)/bin/searduino-jearduino.sh --arduino-code ./$(SHLIB)

include $(SEARDUINO_PATH)//share/searduino/mk/searduino.mk

