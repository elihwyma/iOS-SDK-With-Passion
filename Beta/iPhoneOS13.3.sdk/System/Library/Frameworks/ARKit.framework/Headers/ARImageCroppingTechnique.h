/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARTechnique.h>

@interface ARImageCroppingTechnique : ARTechnique

{
    struct OpaqueVTPixelTransferSession *_vtPixelTransferSession;
    struct __CVPixelBufferPool *_croppedPixelBufferPool;
    struct CGRect _cropRect;
    struct CGSize _croppedImageSize;
}

@property (nonatomic, readonly) struct CGSize croppedImageSize;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)processData:(id)arg1;
- (unsigned long long)requiredSensorDataTypes;
- (id)initWithCroppedImageSize:(struct CGSize)arg1;

@end
