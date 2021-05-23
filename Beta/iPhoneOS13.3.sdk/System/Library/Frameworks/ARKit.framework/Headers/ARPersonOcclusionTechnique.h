/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARTechnique.h>

@class NSObject;

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface ARPersonOcclusionTechnique : ARTechnique

{
    struct __CVPixelBufferPool *_bgraPixelBufferPool;
    struct __CVPixelBufferPool *_depthPixelBufferPool;
    struct shared_ptr<arkit::RobustExpFilter<float>> _varExpFilter;
    long long _lastDeviceOrientation;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSObject<OS_dispatch_semaphore> *_processingSemaphore;
}

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (int)postProcessSegmentation:(struct __CVBuffer *)arg1 depthBuffer:(struct __CVBuffer *)arg2 detectionData:(id)arg3 pResultingDepthBuffer:(struct __CVBuffer **)arg4;

@end
