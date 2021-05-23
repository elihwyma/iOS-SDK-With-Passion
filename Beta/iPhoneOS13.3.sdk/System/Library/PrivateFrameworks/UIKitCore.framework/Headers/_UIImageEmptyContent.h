/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIImageContent.h>

__attribute__((visibility("hidden")))
@interface _UIImageEmptyContent : _UIImageContent

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (struct CGSize)size;
- (_Bool)canProvideFullResCGImage;
- (struct CGSize)sizeInPixels;
- (id)renditionWithSize:(struct CGSize)arg1 scale:(double)arg2 applyingEffect:(id)arg3;
- (_Bool)canProvideCGImage;
- (void)_prepareforDrawingInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (_Bool)_drawInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2 effect:(id)arg3;

@end
