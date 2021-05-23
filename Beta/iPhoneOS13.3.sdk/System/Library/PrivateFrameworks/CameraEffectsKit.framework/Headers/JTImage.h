/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class PVImageBuffer, UIImage;

@interface JTImage : NSObject

{
    UIImage *_image;
    PVImageBuffer *_pvImageBuffer;
}

@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) PVImageBuffer *pvImageBuffer;

+ (id)jtImageWithUIImage:(id)arg1;

- (id)initWithUIImage:(id)arg1;
- (id)initWithPVImage:(id)arg1;
- (id)bluredImageWithFlippedXAxis:(_Bool)arg1;
- (_Bool)hasPVImageBufferAndCanCreateCVPixelBufferWithoutCopy;

@end
