SRC_URL = https://github.com/ytky110/ypkg2.git
SRC_COMMIT = 39950d41d507632aca598bf1064fb90316403530

build: fetch
	mkdir -p $(PKGROOT)/bin
	$(MAKE) -C $(SRC_DIR)
	cp $(SRC_DIR)/bin/* $(PKGROOT)/bin
	../yports/makepkginfo.sh pkginfo $(PKGROOT)

include ../yports/yports.mk

