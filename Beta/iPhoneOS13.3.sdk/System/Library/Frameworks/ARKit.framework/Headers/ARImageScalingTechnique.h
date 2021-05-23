/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARTechnique.h>

@interface ARImageScalingTechnique : ARTechnique

{
    struct OpaqueVTPixelTransferSession *_vtPixelTransferSession;
    struct __CVPixelBufferPool *_scaledPixelBufferPool;
    _Bool _shouldUseScaleFactor;
    unsigned char _downscaleFactor;
    unsigned int _conversionPixelFormatType;
    struct CGSize _scaledSize;
}

@property (nonatomic, readonly) struct CGSize scaledSize;
@property (nonatomic) unsigned int conversionPixelFormatType;
@property (nonatomic, readonly) unsigned char downscaleFactor;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)processData:(id)arg1;
- (unsigned long long)requiredSensorDataTypes;
- (id)initWithScaledSize:(struct CGSize)arg1;
- (id)initWithDownscaleFactor:(unsigned char)arg1;

@end
