SRC_URL = https://github.com/ytky110/aagen.git

build: fetch
	mkdir -p $(PKGROOT)/bin
	$(MAKE) -C $(SRC_DIR)
	cp $(SRC_DIR)/bin/* $(PKGROOT)/bin
	../yports/makepkginfo.sh pkginfo $(PKGROOT)

include ../yports/yports.mk
