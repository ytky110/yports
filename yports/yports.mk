include common.yports.mk

fetch: _clean_src
	git clone "$(SRC_URL)" src
	if [ -n "$(SRC_COMMIT)" ]; then \
	  cd src && git checkout "$(SRC_COMMIT)"; \
	fi

clean: _clean_src
	rm -fr $(PKG_DIR)
	rm -fr $(PKGROOT)

.PHONY:  _clean_src

_clean_src:
	rm -fr $(SRC_DIR)
