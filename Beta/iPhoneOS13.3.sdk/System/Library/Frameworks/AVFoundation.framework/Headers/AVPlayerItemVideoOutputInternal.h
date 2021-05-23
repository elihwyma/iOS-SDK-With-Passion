/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVVideoOutputSettings, AVWeakReference, AVWeakReferencingDelegateStorage;

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface AVPlayerItemVideoOutputInternal : NSObject

{
    struct OpaqueCMTimebase *timebase;
    double currentRate;
    struct OpaqueFigVisualContext *vc;
    AVWeakReference *playerItemWeakReference;
    AVWeakReferencingDelegateStorage *delegateStorage;
    struct OpaqueVTPixelBufferConformer *pixelBufferConformer;
    NSObject<OS_dispatch_queue> *stateQueue;
    NSObject<OS_dispatch_source> *delegateWakeupSource;
    double advanceWakeUpInterval;
    _Bool advanceWakeUpIntervalIsValid;
    CDStruct_1b6d18a9 wakeUpImageTime;
    _Bool immediateWakeUp;
    long long clientStateOnRequestedMediaDataChangeNotification;
    _Bool suppressesPlayerRendering;
    _Bool shouldTagBuffersWithInfo;
    AVVideoOutputSettings *videoSettings;
}

@end
