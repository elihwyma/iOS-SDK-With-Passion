/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@class _UIBackdropViewSettings;

@interface _TVProductBannerBlurImageDecorator : NSObject

{
    _Bool _lightStyle;
    _UIBackdropViewSettings *_backdropSettings;
}

@property (nonatomic) _Bool lightStyle;
@property (retain, nonatomic) _UIBackdropViewSettings *backdropSettings;

- (id)decorate:(id)arg1 scaledWithSize:(struct CGSize)arg2 croppedToFit:(_Bool)arg3;
- (id)blurImageWithImage:(id)arg1 targetSize:(struct CGSize)arg2 scaleSize:(struct CGSize)arg3;
- (id)resizeImage:(struct CGImage *)arg1 targetSize:(struct CGSize)arg2 shouldDither:(_Bool)arg3;

@end
