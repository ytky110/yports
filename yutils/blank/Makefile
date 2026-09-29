SRC_URL = https://github.com/ytky110/blank.git

build: fetch
	mkdir -p $(PKGROOT)/bin
	$(MAKE) -C $(SRC_DIR)
	cp $(SRC_DIR)/bin/* $(PKGROOT)/bin

include ../../yports/yports.mk
