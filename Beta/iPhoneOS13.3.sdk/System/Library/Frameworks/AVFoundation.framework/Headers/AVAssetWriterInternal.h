/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAssetWriterHelper, AVKeyPathDependencyManager, AVWeakReference;

@protocol AVAssetWriterFinishWritingDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVAssetWriterInternal : NSObject

{
    AVWeakReference *weakReference;
    AVAssetWriterHelper *helper;
    NSObject<OS_dispatch_queue> *helperReadWriteQueue;
    AVKeyPathDependencyManager *keyPathDependencyManager;
    id <AVAssetWriterFinishWritingDelegate> finishWritingDelegate;
}

@end
