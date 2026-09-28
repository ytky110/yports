PORTLIST = dumper ycat

build: build_repos
	@echo -e "\nstart build:"
	mkdir -p $(PKGROOT)/bin
	for p in $(PORTLIST); do \
	    echo $$p:; \
	    cp $$p/$(PKGROOT)/bin/* $(PKGROOT)/bin/; \
	done
	@echo -e "\nmaking pkginfo:"
	../yports/makepkginfo.sh pkginfo $(PKGROOT)

include ../yports/multi.yports.mk

