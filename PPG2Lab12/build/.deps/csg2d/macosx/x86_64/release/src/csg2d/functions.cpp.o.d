{
    values = {
        "/Library/Developer/CommandLineTools/usr/bin/clang",
        {
            "-Qunused-arguments",
            "-isysroot",
            "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk",
            "-fvisibility=hidden",
            "-fvisibility-inlines-hidden",
            "-O3",
            "-std=c++20",
            "-Isrc",
            "-DAL_LIBTYPE_STATIC",
            "-framework",
            "CoreAudio",
            "-framework",
            "CoreFoundation",
            "-framework",
            "AudioToolbox",
            "-isystem",
            "/Users/mikolaj/.xmake/packages/s/sfml/2.6.0/c90f2a7cd8a04b2ba5a0dfa0204aa2fe/include",
            "-isystem",
            "/Users/mikolaj/.xmake/packages/f/freetype/2.13.1/e42b26eb72b740aa9a68c1474da99c7e/include/freetype2",
            "-isystem",
            "/Users/mikolaj/.xmake/packages/l/libflac/1.4.3/821915ccd6834ff887b2954544801fde/include",
            "-isystem",
            "/Users/mikolaj/.xmake/packages/l/libvorbis/1.3.7/ecdbbebd71e747b2b00b7c2001302092/include",
            "-isystem",
            "/Users/mikolaj/.xmake/packages/l/libogg/v1.3.4/13dca54e1aec43eb9a90a7c131f0cc3b/include",
            "-isystem",
            "/Users/mikolaj/.xmake/packages/o/openal-soft/1.23.1/bdb128fb6cc848298e8c5fc5c40c5c5c/include",
            "-DNDEBUG"
        }
    },
    depfiles_gcc = "build/.objs/csg2d/macosx/x86_64/release/src/csg2d/__cpp_functions.cpp.cpp:   src/csg2d/functions.cpp src/csg2d/functions.h src/csg2d/shape.h   src/csg2d/libincludes.h src/csg2d/circle.h src/csg2d/vector2d.h   src/csg2d/rectangle.h\
",
    files = {
        "src/csg2d/functions.cpp"
    }
}