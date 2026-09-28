include common.yports.mk

PORTLIST ?= # Set in multi-port Makefile

.PHONY: build_repos

build_repos: # should be depended by build
	for p in $(PORTLIST); do \
	    echo -e "\n$$p:"; \
	    $(MAKE) -C $$p; \
	done

clean:
	for p in $(PORTLIST); do \
	    echo -e "\n$$p:"; \
	    $(MAKE) -C $$p clean; \
	done
	@echo
	rm -fr $(PKG_DIR)
	rm -fr $(PKGROOT)

# deprecated because fetched by build too
fetch:
	for p in $(PORTLIST); do \
	    echo -e "\n$$p:"; \
	    $(MAKE) -C $$p fetch; \
	done


