SRC_URL = https://github.com/ytky110/caquicocu.git
SRC_COMMIT = 02d3319e341a86cd5fb152df9ef3abe86790a6e9

build: fetch
	mkdir -p $(PKGROOT)/bin
	$(MAKE) -C $(SRC_DIR)
	cp $(SRC_DIR)/bin/* $(PKGROOT)/bin
	../yports/makepkginfo.sh pkginfo $(PKGROOT)

include ../yports/yports.mk
