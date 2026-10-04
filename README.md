# yports

Yports is a original ports tree for [ypkg2](https://github.com/ytky110/ypkg2)
inspired of FreeBSD's ports.

It's designed to use BSD `make`, `bmake` and not `gmake`.

How to install:

```
git clone https://github.com/ytyk110/yports.git
cd yports/<name>
make install
```

Make targets:

- `fetch`
- `build`
- `makepkg`
- `install`
- `clean`

---

port's Makefile has to include `yports/yports.mk` or
`yports/multi.yports.mk` in end (to make `build` as default target)
