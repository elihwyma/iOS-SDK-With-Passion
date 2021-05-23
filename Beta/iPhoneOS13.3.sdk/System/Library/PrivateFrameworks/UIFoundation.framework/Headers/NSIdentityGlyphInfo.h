/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <UIFoundation/NSGlyphInfo.h>

@class NSFont;

@interface NSIdentityGlyphInfo : NSGlyphInfo

{
    NSFont *_font;
    unsigned int _glyph;
}

+ (void)initialize;
+ (_Bool)supportsSecureCoding;
+ (id)glyphInfoWithGlyph:(unsigned int)arg1 forFont:(id)arg2 baseString:(id)arg3;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_font;
- (unsigned int)_glyph;
- (unsigned int)_glyphForFont:(id)arg1 baseString:(id)arg2;
- (id)initWithGlyph:(unsigned int)arg1 forFont:(id)arg2 baseString:(id)arg3;
- (unsigned short)glyph;

@end
