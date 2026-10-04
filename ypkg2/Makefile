SRC_URL = https://github.com/ytky110/ypkg2.git
SRC_COMMIT = 47e00897a93587228f4023ccd7e0695263a46b61

build: fetch
	mkdir -p $(PKGROOT)/bin
	$(MAKE) -C $(SRC_DIR)
	cp $(SRC_DIR)/bin/* $(PKGROOT)/bin
	../yports/makepkginfo.sh pkginfo $(PKGROOT)

include ../yports/yports.mk

