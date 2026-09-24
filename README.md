# YPORTS

yports is a port tree for ypkg2 packages.

[ypkg2](https://github.com/ytky110/ypkg2) is
a simple package installer in sh to home.
It needs GNU stow.

How to use it (after installed ypkg2).
```
git clone https://github.com/ytky110/yports
cd yports
cd <pkgname>
make installpkg2
```

`YPORTS.md` is the file that is in projects in yports.

## Structure of project in yports

The project has to have a `Makefile` and `.ypkg2/` directory.

The Makefile has to have `installpkg2` and `buildpkg2` target.
`buildpkg2` build and make the package to `pkg/`.
`installpkg2` install it with ypkg2.
It is good if it has also `clean` target that remove `pkg/` and execute `CLEANPKG`.

`.ypkg2` contains `MAKEPKG` and `CLEANPKG` script and `.pkginfo`.
`MAKEPKG` is executed by `buildpkg2`,
`CLEANPKG` normally by `clean`, and `.pkginfo` is essential.
