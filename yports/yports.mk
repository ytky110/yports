SRC_URL ?= # Set in port Makefile

PKG_DIR ?= pkg
SRC_DIR ?= src
PKGROOT ?= pkgroot

.PHONY: fetch makepkg install yports_clean yports_clean_src

fetch: _clean_src
	git clone $(SRC_URL) $(SRC_DIR)

makepkg: $(PKGROOT)/.pkginfo
	mkdir -p $(PKG_DIR)
	. $(PKGROOT)/.pkginfo; \
	tar -c --zstd -C $(PKGROOT) -f $$name.$$version.$$arch.$$os.ypkg2.tar.zst .
	mv *.ypkg2.* $(PKG_DIR)

install: makepkg
	ypkg2 install $(PKG_DIR)/*

clean: _clean_src
	rm -fr $(PKG_DIR)
	rm -fr $(PKGROOT)

_clean_src:
	rm -fr $(SRC_DIR)
