#!/bin/sh

_main() {
    P=makepkginfo.sh
    pkginfo="$1"
    pkgroot="$2"

    if [ -e "$pkginfo" ]
    then
        . "$pkginfo"
    else
        echo "$P: $pkginfo doesn't exist."
        exit 1
    fi

    if ! cp "$pkginfo" "$pkgroot/.pkginfo"
    then
        echo "$P: Failed to copy $pkginfo to $pkgroot/.pkginfo"
        exit 1
    fi

    if [ -z "$arch" -o "$arch" = unknown ]
    then
        _arch=`_get_host_info arch`
        echo "arch=$_arch" >> "$pkgroot/.pkginfo"
    fi

    if [ -z "$os" -o "$os" = unknown ]
    then
        _os=`_get_host_info os`
        echo "os=$_os" >> "$pkgroot/.pkginfo"
    fi
}

_get_host_info() {
    case "$1" in
    arch)
        _raw_arch=`uname -m`
        case "$_raw_arch" in
            x86_64|amd64)
                echo x86_64
                ;;
            i?86)
                echo i386
                ;;
            aarch64|arm64)
                echo aarch64
                ;;
            armv7l|armv7)
                echo armv7l
                ;;
            *)
                echo "$_raw_arch"
                ;;
        esac
        ;;
    os)
        _raw_os=`uname -s`
        case "$_raw_os" in
            Linux)
                echo linux
                ;;
            FreeBSD)
                echo freebsd
                ;;
            Darwin)
                echo macos
                ;;
            *)
                echo unknown
                ;;
        esac
        ;;
    esac

    return 0
}

_main "$@"
