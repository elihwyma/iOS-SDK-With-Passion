/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <Foundation/NSObject.h>

@class NSAttributedString, UIFont;

@interface NSTextLineFragment : NSObject

{
    struct __CTLine *_lineRef;
    unsigned short *_glyphs;
    struct CGSize *_advances;
    long long _glyphCount;
    UIFont *_font;
    NSAttributedString *_attributedString;
    struct _NSRange _characterRange;
    struct CGPoint glyphOrigin;
    struct CGRect typographicBounds;
}

@property struct CGRect typographicBounds;
@property struct CGPoint glyphOrigin;
@property (copy, readonly) NSAttributedString *attributedString;
@property (readonly) struct _NSRange characterRange;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)drawAtPoint:(struct CGPoint)arg1 context:(struct CGContext *)arg2;
- (struct CGRect)boundsWithType:(long long)arg1 options:(unsigned long long)arg2;
- (id)initWithAttributedString:(id)arg1 range:(struct _NSRange)arg2;
- (unsigned long long)numberOfGlyphs;
- (void)drawAtPoint:(struct CGPoint)arg1 graphicsContext:(id)arg2;
- (id)initWithString:(id)arg1 attributes:(id)arg2 range:(struct _NSRange)arg3;
- (void)setLineRef:(struct __CTLine *)arg1;
- (void)setGlyphs:(const unsigned short *)arg1 advances:(const struct CGSize *)arg2 count:(long long)arg3 font:(id)arg4;
- (struct CGRect)typographicUsedBounds;
- (struct CGPoint)locationForCharacterAtIndex:(long long)arg1;
- (long long)characterIndexForPoint:(struct CGPoint)arg1 fractionOfDistanceThroughGlyph:(double *)arg2;

@end
