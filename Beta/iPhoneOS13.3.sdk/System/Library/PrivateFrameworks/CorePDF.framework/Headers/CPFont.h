/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CPFont : NSObject

{
    struct CGPDFFont *cgPDFFont;
    struct CGFont *cgFont;
    NSString *fontName;
    _Bool exactMatch;
    CDStruct_05724ab2 descriptor;
    struct __CFDictionary *kernDictionary;
    double kernUnitsPerEm;
    _Bool isHorizontal;
    double defaultWidth;
    _Bool disposed;
}

- (void)dealloc;
- (void)finalize;
- (unsigned int)flags;
- (double)maxWidth;
- (id)fontName;
- (double)xHeight;
- (double)underlineThickness;
- (double)leading;
- (double)capHeight;
- (double)underlinePosition;
- (double)fontWeight;
- (_Bool)isHorizontal;
- (double)spaceWidth;
- (id)initWith:(struct CGPDFDictionary *)arg1;
- (double)fontStretch;
- (void)dispose;
- (struct CGPDFFont *)cgPDFFont;
- (void)uniCharsFor:(unsigned long long)arg1 count:(unsigned long long *)arg2 toArray:(unsigned short *)arg3 maxChars:(unsigned int)arg4;
- (id)matchingFontName;
- (void)loadExternalFontInfoFor:(id)arg1;
- (void)getFontName;
- (void)loadEmbeddedFontInfo;
- (struct CGFont *)cgFont;
- (_Bool)isSameFontAs:(id)arg1;
- (struct CGRect)fontBBox;
- (double)italicAngle;
- (double)ascent;
- (double)descent;
- (double)stemV;
- (double)stemH;
- (double)avgWidth;
- (double)missingWidth;
- (double)kernBetweenUnicode:(unsigned short)arg1 andUnicode:(unsigned short)arg2;
- (_Bool)getGlyphs:(unsigned short *)arg1 forCodes:(const unsigned short *)arg2 count:(unsigned int)arg3;

@end
