/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@protocol MTLDevice, MTLTexture;

@interface PXGCornerRadiusMask : NSObject

{
    id <MTLDevice> _device;
    long long _texturePixelSide;
    double _screenScale;
    double _maxCornerRadius;
    long long _numberOfSlices;
    long long _byteSize;
    id <MTLTexture> _atomicTexture;
}

@property (retain) id <MTLTexture> atomicTexture;
@property (nonatomic, readonly) id <MTLTexture> texture;
@property (nonatomic, readonly) long long texturePixelSide;
@property (nonatomic, readonly) double screenScale;
@property (nonatomic, readonly) double maxCornerRadius;
@property (nonatomic, readonly) long long numberOfSlices;
@property (nonatomic, readonly) long long byteSize;

+ (id)_loadQueue;
+ (id)cornerRadiusMaskForDevice:(id)arg1 maxCornerRadius:(double)arg2 screenScale:(double)arg3;

- (id)init;
- (id)initWithDevice:(id)arg1 maxCornerRadius:(double)arg2 screenScale:(double)arg3;
- (void)_loadCornerRadiusTexture;

@end
