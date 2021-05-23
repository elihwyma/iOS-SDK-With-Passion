/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class JTPixelBufferPool;

@interface JTPixelRotationSession : NSObject

{
    struct OpaqueVTImageRotationSession *_imageRotationSession;
    _Bool _mirror;
    unsigned int _rotationDegrees;
    JTPixelBufferPool *_pixelBufferPool;
}

@property (retain, nonatomic) JTPixelBufferPool *pixelBufferPool;
@property (nonatomic, readonly) unsigned int rotationDegrees;
@property (nonatomic, readonly) _Bool mirror;

+ (void)applyDeviceRotationCorrectionWithSession:(inout id *)arg1 toFrameSet:(inout id *)arg2;

- (void)dealloc;
- (id)initWithRotation:(unsigned int)arg1 mirror:(_Bool)arg2;
- (struct __CVBuffer *)createRotatedPixelBuffer:(struct __CVBuffer *)arg1;
- (id)createRotatedFrameSet:(id)arg1;
- (void)JT_releaseImageRotationSession;

@end
