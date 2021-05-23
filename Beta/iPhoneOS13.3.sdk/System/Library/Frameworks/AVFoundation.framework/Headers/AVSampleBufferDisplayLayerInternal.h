/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVMediaDataRequester, AVWeakReference, CALayer, NSError, NSMutableArray, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVSampleBufferDisplayLayerInternal : NSObject

{
    CALayer *contentLayer;
    struct OpaqueFigVideoQueue *videoQueue;
    _Bool outputObscured;
    long long status;
    NSError *error;
    NSString *videoGravity;
    struct CGSize presentationSize;
    struct CGRect bounds;
    _Bool preventsDisplaySleepDuringVideoPlayback;
    _Bool isRequestingMediaData;
    AVMediaDataRequester *mediaDataRequester;
    _Bool aboveHighWaterLevel;
    NSObject<OS_dispatch_queue> *serialQueue;
    AVWeakReference *weakReferenceToSelf;
    AVWeakReference *weakReferenceToSynchronizer;
    _Bool addedToSynchronizer;
    _Bool controlTimebaseSetByUserIsInUse;
    struct OpaqueCMTimebase *controlTimebaseSetByUser;
    struct OpaqueCMTimebase *readOnlyVideoQueueTimebase;
    struct OpaqueCMTimebase *readOnlyRenderingTimebase;
    NSObject<OS_dispatch_queue> *flushCallbackListQueue;
    NSObject<OS_dispatch_queue> *flushCallbackQueue;
    NSMutableArray *flushCallbacks;
    NSObject<OS_dispatch_queue> *queueForProtectingPrerollCompleteCallback;
    CDUnknownBlockType pendingPrerollCompleteCallback;
    int pendingPrerollRequestID;
    NSObject<OS_dispatch_queue> *queueForCallingPrerollCompleteCallback;
    int upcomingPTSExpectation;
    CDStruct_1b6d18a9 minimumUpcomingPTS;
}

@end
