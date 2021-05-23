/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAssetWriterInputHelper, AVAssetWriterInputPassDescriptionResponder, AVKeyPathDependencyManager, AVWeakReference;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVAssetWriterInputInternal : NSObject

{
    AVWeakReference *weakReference;
    AVAssetWriterInputHelper *helper;
    NSObject<OS_dispatch_queue> *helperQueue;
    AVWeakReference *weakReferenceToAttachedAdaptor;
    AVWeakReference *weakReferenceToAssetWriter;
    AVKeyPathDependencyManager *keyPathDependencyManager;
    long long numberOfAppendFailures;
    _Bool markAsFinishedCalled;
    NSObject<OS_dispatch_queue> *appendFailureReadWriteQueue;
    AVAssetWriterInputPassDescriptionResponder *passDescriptionResponder;
}

@end
