/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableArray, VNSequenceRequestHandler;

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface ICDocCamImageSequenceAnalyzer : NSObject

{
    NSMutableArray *_frameArray;
    NSObject<OS_dispatch_semaphore> *_frameArraySem;
    NSObject<OS_dispatch_queue> *_dq;
    NSDictionary *_sessionOptions;
    CDUnknownBlockType _callback;
    NSObject<OS_dispatch_semaphore> *_queueSizeSem;
    VNSequenceRequestHandler *_seqHandler;
    _Bool _bRealTime;
    _Bool _bSynchronous;
}

- (void)dealloc;
- (void)finish;
- (id)initWithOptions:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)addFrame:(struct __CVBuffer *)arg1 metaData:(id)arg2 frameOptions:(id)arg3 rectangleRequest:(id)arg4 pixelFocalLength:(float)arg5 cameraIntrinsicData:(const struct __CFData *)arg6;

@end
