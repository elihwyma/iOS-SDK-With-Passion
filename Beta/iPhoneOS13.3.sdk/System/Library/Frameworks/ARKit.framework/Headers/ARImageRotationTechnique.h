/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARTechnique.h>

@interface ARImageRotationTechnique : ARTechnique

{
    struct OpaqueVTImageRotationSession *_vtPixelTransferSession;
    struct __CVPixelBufferPool *_bufferPool;
    long long _rotationAngle;
    long long _mirrorMode;
}

@property (nonatomic, readonly) long long rotationAngle;
@property (nonatomic, readonly) long long mirrorMode;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)processData:(id)arg1;
- (unsigned long long)requiredSensorDataTypes;
- (id)initWithRotation:(long long)arg1 mirror:(long long)arg2;
- (int)_rotateAccelerate:(struct __CVBuffer *)arg1 pOutputBuffer:(struct __CVBuffer **)arg2;

@end
