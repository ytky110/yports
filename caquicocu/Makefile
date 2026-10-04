SRC_URL = https://github.com/ytky110/caquicocu.git
SRC_COMMIT = 3a71735d74ab1f971b2c0387cec5632ec2176379

build: fetch
	mkdir -p $(PKGROOT)/bin
	$(MAKE) -C $(SRC_DIR)
	cp $(SRC_DIR)/bin/* $(PKGROOT)/bin
	../yports/makepkginfo.sh ./pkginfo $(PKGROOT)

include ../yports/yports.mk
