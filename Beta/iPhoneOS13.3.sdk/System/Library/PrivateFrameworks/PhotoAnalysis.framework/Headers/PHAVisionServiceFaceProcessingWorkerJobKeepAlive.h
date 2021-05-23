/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <Foundation/NSObject.h>

@class PHAWorkerJob;

@protocol OS_dispatch_queue;

@interface PHAVisionServiceFaceProcessingWorkerJobKeepAlive : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    PHAWorkerJob *_job;
    _Bool _continueReporting;
}

- (void)stop;
- (void)start;
- (id)initWithJob:(id)arg1;
- (id)job;
- (void)_extendTimeoutAndDispatchAgainIfNecessary;

@end
