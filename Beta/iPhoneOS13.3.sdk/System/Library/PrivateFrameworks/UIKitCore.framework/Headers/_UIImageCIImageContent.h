/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIImageContent.h>

@class CIImage;

__attribute__((visibility("hidden")))
@interface _UIImageCIImageContent : _UIImageContent

{
    CIImage *_ciImage;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)_context;
- (_Bool)canProvideFullResCGImage;
- (id)initWithScale:(double)arg1;
- (struct CGSize)sizeInPixels;
- (void)_prepareforDrawingInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (void)_drawWithoutEffectInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (id)CIImage;
- (_Bool)isCIImage;
- (id)initWithCIImage:(id)arg1 scale:(double)arg2;

@end
