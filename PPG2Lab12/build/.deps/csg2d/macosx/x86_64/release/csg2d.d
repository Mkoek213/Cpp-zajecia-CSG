{
    files = {
        "build/.objs/csg2d/macosx/x86_64/release/src/csg2d/shape.cpp.o",
        "build/.objs/csg2d/macosx/x86_64/release/src/csg2d/vector2d.cpp.o",
        "build/.objs/csg2d/macosx/x86_64/release/src/csg2d/rectangle.cpp.o",
        "build/.objs/csg2d/macosx/x86_64/release/src/csg2d/circle.cpp.o",
        "build/.objs/csg2d/macosx/x86_64/release/src/csg2d/functions.cpp.o",
        "build/.objs/csg2d/macosx/x86_64/release/src/csg2d/main.cpp.o"
    },
    values = {
        "/Library/Developer/CommandLineTools/usr/bin/clang++",
        {
            "-isysroot",
            "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk",
            "-L/Users/mikolaj/.xmake/packages/s/sfml/2.6.0/c90f2a7cd8a04b2ba5a0dfa0204aa2fe/lib",
            "-L/Users/mikolaj/.xmake/packages/f/freetype/2.13.1/e42b26eb72b740aa9a68c1474da99c7e/lib",
            "-L/Users/mikolaj/.xmake/packages/l/libflac/1.4.3/821915ccd6834ff887b2954544801fde/lib",
            "-L/Users/mikolaj/.xmake/packages/l/libvorbis/1.3.7/ecdbbebd71e747b2b00b7c2001302092/lib",
            "-L/Users/mikolaj/.xmake/packages/l/libogg/v1.3.4/13dca54e1aec43eb9a90a7c131f0cc3b/lib",
            "-L/Users/mikolaj/.xmake/packages/o/openal-soft/1.23.1/bdb128fb6cc848298e8c5fc5c40c5c5c/lib",
            "-Wl,-x",
            "-Wl,-dead_strip",
            "-lsfml-graphics",
            "-lsfml-window",
            "-lsfml-audio",
            "-lsfml-network",
            "-lsfml-system",
            "-lfreetype",
            "-lz",
            "-lFLAC",
            "-lvorbisenc",
            "-lvorbisfile",
            "-lvorbis",
            "-logg",
            "-lopenal",
            "-framework",
            "CoreAudio",
            "-framework",
            "CoreFoundation",
            "-framework",
            "AudioToolbox"
        }
    }
}