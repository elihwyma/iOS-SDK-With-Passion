/*
 Image: /System/Library/Frameworks/CoreText.framework/CoreText
 */

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct GlyphStack {
    long long _field1;
    long long _field2;
    struct GlyphStackEntry _field3[1];
};

struct GlyphStackEntry {
    unsigned short _field1;
    struct CGSize _field2;
    unsigned int _field3;
    long long _field4;
    long long _field5;
    struct CGPoint _field6;
};

struct type {
    unsigned char __lx[16];
};

typedef struct {
    long long _field1;
    long long _field2;
} CDStruct_912cb5d2;
