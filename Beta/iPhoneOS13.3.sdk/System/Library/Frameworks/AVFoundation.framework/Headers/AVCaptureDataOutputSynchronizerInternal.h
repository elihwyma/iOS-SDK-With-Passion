/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVCaptureDataOutputDelegateCallbackHelper, AVWeakReference, NSArray;

__attribute__((visibility("hidden")))
@interface AVCaptureDataOutputSynchronizerInternal : NSObject

{
    AVCaptureDataOutputDelegateCallbackHelper *delegateCallbackHelper;
    AVWeakReference *weakReference;
    NSArray *dataOutputs;
    struct OpaqueFigSimpleMutex *dataOutputsStorageMutex;
    NSArray *dataOutputsStorage;
    int masterSynchronizedDataQueueMaxDepth;
    _Bool synchronizingVideoAndDepth;
    _Bool synchronizingVideoAndVisionData;
}

@end
