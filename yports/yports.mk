include common.yports.mk

fetch: _clean_src
	git clone $(SRC_URL) $(SRC_DIR)

clean: _clean_src
	rm -fr $(PKG_DIR)
	rm -fr $(PKGROOT)

.PHONY:  _clean_src

_clean_src:
	rm -fr $(SRC_DIR)
