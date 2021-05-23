/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIImageCGImageContent.h>

@class CUINamedVectorImage;

__attribute__((visibility("hidden")))
@interface _UIImageCUIVectorImageContent : _UIImageCGImageContent

{
    CUINamedVectorImage *_vectorImage;
    struct {
        unsigned int isPDF:1;
        unsigned int isSVG:1;
    } coreFlags;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (_Bool)canProvideFullResCGImage;
- (id)initWithScale:(double)arg1;
- (_Bool)isCGPDFPage;
- (struct CGPDFPage *)CGPDFPage;
- (double)vectorScale;
- (_Bool)isCGSVGDocument;
- (struct CGSVGDocument *)CGSVGDocument;
- (_Bool)_canProvideCGImageDirectly;
- (struct CGImage *)_CGImageWithSize:(struct CGSize)arg1 scale:(double)arg2;
- (void)_prepareforDrawingInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (void)_drawWithoutEffectInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (id)contentWithCGImage:(struct CGImage *)arg1;
- (id)initWithCGImage:(struct CGImage *)arg1 CUIVectorImage:(id)arg2 scale:(double)arg3;

@end
