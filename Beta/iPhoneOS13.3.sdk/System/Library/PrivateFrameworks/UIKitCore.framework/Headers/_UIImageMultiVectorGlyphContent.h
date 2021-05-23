/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIImageContent.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIImageMultiVectorGlyphContent : _UIImageContent

{
    NSArray *_glyphs;
    NSArray *_colors;
    NSArray *_offsets;
    NSArray *_scaleFactors;
    struct CGSize _sizeInPixels;
    struct CGPoint _anchorPoint;
}

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (_Bool)canProvideFullResCGImage;
- (id)initWithScale:(double)arg1;
- (double)vectorScale;
- (struct CGSize)sizeInPixels;
- (_Bool)canProvideCGImage;
- (void)_prepareforDrawingInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (_Bool)_drawInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2 effect:(id)arg3;
- (_Bool)isCGImage;
- (_Bool)isVectorGlyph;
- (id)initWithSize:(struct CGSize)arg1 glyphs:(id)arg2 colors:(id)arg3 offsets:(id)arg4 scaleFactors:(id)arg5 anchorPoint:(struct CGPoint)arg6;

@end
