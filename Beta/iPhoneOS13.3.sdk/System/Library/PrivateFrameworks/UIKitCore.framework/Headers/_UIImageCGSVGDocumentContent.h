/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIImageContent.h>

__attribute__((visibility("hidden")))
@interface _UIImageCGSVGDocumentContent : _UIImageContent

{
    struct CGSVGDocument *_svgDocumentRef;
}

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (_Bool)canProvideFullResCGImage;
- (id)initWithScale:(double)arg1;
- (_Bool)isCGSVGDocument;
- (struct CGSVGDocument *)CGSVGDocument;
- (struct CGSize)sizeInPixels;
- (void)_drawWithoutEffectInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (id)initWithCGSVGDocument:(struct CGSVGDocument *)arg1 scale:(double)arg2;

@end
