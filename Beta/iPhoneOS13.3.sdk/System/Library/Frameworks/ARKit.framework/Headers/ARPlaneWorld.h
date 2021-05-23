/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class ARGPUWarper;

@protocol OS_dispatch_semaphore;

@interface ARPlaneWorld : NSObject

{
    map_09d5a725 _planes;
    ARGPUWarper *_gpuWarper;
    struct ARPlaneUpdateQueue _queue;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    unsigned long long _textureSize;
}

+ (map_f683e46a)findMergedPlanes:(const map_09d5a725 *)arg1:(const map_09d5a725 *)arg2;

- (id)init;
- (id).cxx_construct;
- (vector_f1799d67)planes;
- (void)updatePlanes:(const map_09d5a725 *)arg1 withCameraImage:(struct __CVBuffer *)arg2 exposureOffset:(float)arg3 transform:(CDStruct_14d5dc5e)arg4 intrinsics:(CDStruct_8e0628e6)arg5 synchronous:(_Bool)arg6;
- (id)initWithTextureSize:(unsigned long long)arg1;
- (map_09d5a725)updatePlanes:(const map_09d5a725 *)arg1 withCurrentDetections:(const map_09d5a725 *)arg2 synchronous:(_Bool)arg3;

@end
