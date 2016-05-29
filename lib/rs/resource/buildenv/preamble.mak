# This is the preamble.mak used when building packages and other addons
# INSTALL_DIR=/Users/evil/dev/lisp/rs-ios/stage0/build-ios
IFLAGS=$(USR_IFLAGS) -I. $(SYS_IFLAGS) -I$(INSTALL_DIR)/include
SUBPROJ_LD=ld
SUBPROJ_LD_FLAGS=-r
LDX_FLAGS=-L$(INSTALL_DIR)/lib -lrs -dynamic 
CC=/Applications/Xcode.app/Contents/Developer/usr/bin/gcc
CFLAGS1=-g -arch arm64 -mios-version-min=5.0 -isysroot /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS9.3.sdk -DAPPLE -DIPHONE -DNDEBUG -DINLINES -DGC_MACROS -Wall -Wno-unused
CFLAGS=$(CFLAGS1) $(XCFLAGS) $(IFLAGS)
