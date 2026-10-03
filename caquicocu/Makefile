SRC_URL = https://github.com/ytky110/caquicocu.git
SRC_COMMIT = f631e7f5c17475a5408f0ab16af3b8b26bc7ee21

build: fetch
	mkdir -p $(PKGROOT)/bin
	$(MAKE) -C $(SRC_DIR)
	cp $(SRC_DIR)/bin/* $(PKGROOT)/bin
	../yports/makepkginfo.sh pkginfo $(PKGROOT)

include ../yports/yports.mk
