SRC_URL ?= # Set in port Makefile

PKG_DIR ?= pkg
SRC_DIR ?= src
PKGROOT ?= pkgroot

.PHONY: makepkg install

$(PKGROOT)/.pkginfo:
	$(MAKE) build

makepkg: $(PKGROOT)/.pkginfo
	mkdir -p $(PKG_DIR)
	. $(PKGROOT)/.pkginfo; \
	tar -c --zstd -C $(PKGROOT) -f $$name.$$version.$$arch.$$os.ypkg2.tar.zst .
	mv *.ypkg2.* $(PKG_DIR)

install: makepkg
	ypkg2 install $(PKG_DIR)/*

# Should be defined by yports's makefile
.PHONY: fetch clean

# Should be defined by the port
.PHONY: build
