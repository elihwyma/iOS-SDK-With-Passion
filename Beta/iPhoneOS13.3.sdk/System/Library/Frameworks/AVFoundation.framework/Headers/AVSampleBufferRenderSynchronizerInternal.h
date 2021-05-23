/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVWeakReference, NSMutableArray;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVSampleBufferRenderSynchronizerInternal : NSObject

{
    AVWeakReference *weakObserver;
    struct OpaqueCMTimebase *readOnlyTimebase;
    NSObject<OS_dispatch_queue> *rateQueue;
    float rate;
    CDStruct_1b6d18a9 mostRecentlySetTime;
    NSObject<OS_dispatch_queue> *rendererListQueue;
    NSMutableArray *renderers;
    NSMutableArray *timedRenderRemovals;
    NSObject<OS_dispatch_queue> *figSynchronizerAccessQueue;
    struct OpaqueFigSampleBufferRenderSynchronizer *figSynchronizer;
}

@end
