/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <Foundation/NSObject.h>

@interface OKMediaImage : NSObject

{
    struct CGImage *_cgImageRef;
    long long _imageOrientation;
    double _scale;
}

@property (nonatomic, readonly) struct CGImage *CGImage;
@property (nonatomic, readonly) long long imageOrientation;
@property (nonatomic, readonly) double scale;

+ (id)mediaImageWithCGImage:(struct CGImage *)arg1;
+ (id)mediaImageWithUIImage:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)initWithCGImage:(struct CGImage *)arg1;
- (id)initWithUIImage:(id)arg1;
- (struct CGImage *)createComposedImage:(_Bool)arg1 colorSpace:(id)arg2;
- (id)initWithCGImage:(struct CGImage *)arg1 imageOrientation:(long long)arg2 scale:(double)arg3;

@end
