/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSData;

@protocol OS_dispatch_queue;

@interface PKImage : NSObject <Swift>

{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _shouldTile;
    _Bool _shouldStretch;
    struct PKEdgeInsets _capInsets;
    NSData *_imageData;
    struct CGImage *_imageRef;
    double _scale;
    long long _orientation;
}

@property (nonatomic, readonly) NSData *imageData;
@property (nonatomic, readonly) struct CGImage *imageRef;
@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) long long orientation;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) _Bool tiles;
@property (nonatomic, readonly) _Bool stretches;
@property (nonatomic, readonly) struct PKEdgeInsets capInsets;

+ (_Bool)supportsSecureCoding;
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)hashOfImageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)URLForImageNamed:(id)arg1 inBundle:(id)arg2 scale:(double *)arg3 preferredScreenScale:(double)arg4 suffix:(id)arg5;
+ (id)newImageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)newImageNamed:(id)arg1 inBundle:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4;
+ (id)URLForImageNamed:(id)arg1 inBundle:(id)arg2 scale:(double *)arg3;
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4;
+ (id)passesImageNamed:(id)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(long long)arg3;
- (_Bool)_isTiledWhenStretchedToSize:(struct CGSize)arg1;
- (id)initWithData:(id)arg1 scale:(double)arg2;
- (id)imageHash;
- (void)drawInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (_Bool)isEqualToImage:(id)arg1;
- (void)_queue_createImageRefIfNecessary;
- (id)resizableImageByTilingWithCapInsets:(struct PKEdgeInsets)arg1;
- (void)drawInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2 withBlendMode:(int)arg3 alpha:(double)arg4;
- (struct CGSize)downscaleSizeMatchingScale:(double)arg1;
- (void)preheatBitmapData;
- (id)blurredImageWithRadius:(unsigned long long)arg1 constraints:(id)arg2;
- (id)croppedImageWithInsets:(struct PKEdgeInsets)arg1;
- (id)imageWithoutCapInsets;
- (id)resizedImageWithConstraints:(id)arg1;
- (id)resizableImageByStretchingWithCapInsets:(struct PKEdgeInsets)arg1;
- (id)resizableImageByTilingCenterPixel;

@end
