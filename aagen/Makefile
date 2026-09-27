SRC_URL = https://github.com/ytky110/aagen.git

.PHONY: build clean

build: fetch
	mkdir -p $(PKGROOT)/bin
	$(MAKE) -C $(SRC_DIR)
	cp $(SRC_DIR)/bin/* $(PKGROOT)/bin
	../yports/makepkginfo.sh pkginfo $(PKGROOT)

clean: yports_clean
	rm -fr $(SRC_DIR)/bin

include ../yports/yports.mk
