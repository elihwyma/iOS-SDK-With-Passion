/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIImage;

@interface _UILegibilityImageSet : NSObject

{
    UIImage *_image;
    UIImage *_shadowImage;
}

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *shadowImage;

+ (id)imageFromImage:(id)arg1 withShadowImage:(id)arg2;

- (void)dealloc;
- (id)initWithImage:(id)arg1 shadowImage:(id)arg2;
- (id)imageSetFlippedForRightToLeft;
- (id)imageSetWithOrientation:(long long)arg1;

@end
