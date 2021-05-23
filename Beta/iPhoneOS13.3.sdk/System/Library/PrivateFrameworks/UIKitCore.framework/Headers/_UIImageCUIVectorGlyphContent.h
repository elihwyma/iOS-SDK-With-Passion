/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIImageCGImageContent.h>

@class CUINamedVectorGlyph, _UIImageContent;

__attribute__((visibility("hidden")))
@interface _UIImageCUIVectorGlyphContent : _UIImageCGImageContent

{
    CUINamedVectorGlyph *_vectorGlyph;
    _UIImageContent *_vectorContent;
    double _glyphScaleFactor;
    double _vectorScale;
    struct CGSize _sizeInPixels;
}

@property (readonly) CUINamedVectorGlyph *_vectorGlyph;
@property (nonatomic) double glyphScaleFactor;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (_Bool)canProvideFullResCGImage;
- (id)initWithScale:(double)arg1;
- (double)vectorScale;
- (struct CGSize)sizeInPixels;
- (_Bool)_canProvideCGImageDirectly;
- (struct CGImage *)_CGImageWithSize:(struct CGSize)arg1 scale:(double)arg2;
- (void)_prepareforDrawingInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (void)_drawWithoutEffectInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (_Bool)isVectorGlyph;
- (id)vectorGlyph;
- (id)contentWithCGImage:(struct CGImage *)arg1;
- (id)initWithCGImage:(struct CGImage *)arg1 CUIVectorGlyph:(id)arg2 scale:(double)arg3;

@end
