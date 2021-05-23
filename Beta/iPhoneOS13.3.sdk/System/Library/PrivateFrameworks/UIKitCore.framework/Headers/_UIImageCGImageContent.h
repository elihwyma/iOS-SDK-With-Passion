/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIImageContent.h>

__attribute__((visibility("hidden")))
@interface _UIImageCGImageContent : _UIImageContent

{
    _Atomic struct CGImage *_imageRef;
}

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (struct CGImage *)CGImage;
- (struct CGSize)sizeInPixels;
- (_Bool)hasCGImage;
- (void)_prepareforDrawingInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (void)_drawWithoutEffectInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (_Bool)isCGImage;
- (id)contentWithCGImage:(struct CGImage *)arg1;
- (id)renditionApplyingEffect:(id)arg1;
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2;

@end
