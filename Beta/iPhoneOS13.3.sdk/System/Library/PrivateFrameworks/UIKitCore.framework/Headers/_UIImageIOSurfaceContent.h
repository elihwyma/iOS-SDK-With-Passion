/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIImageContent.h>

__attribute__((visibility("hidden")))
@interface _UIImageIOSurfaceContent : _UIImageContent

{
    struct __IOSurface *_surfaceRef;
}

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithScale:(double)arg1;
- (struct CGSize)sizeInPixels;
- (_Bool)canProvideCGImage;
- (struct __IOSurface *)IOSurface;
- (_Bool)isIOSurface;
- (id)initWithIOSurface:(struct __IOSurface *)arg1 scale:(double)arg2;

@end
