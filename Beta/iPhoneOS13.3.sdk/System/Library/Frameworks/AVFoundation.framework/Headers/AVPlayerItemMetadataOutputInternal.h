/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVWeakReference, AVWeakReferencingDelegateStorage, NSArray;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVPlayerItemMetadataOutputInternal : NSObject

{
    NSArray *metadataIdentifiers;
    AVWeakReferencingDelegateStorage *delegateStorage;
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    NSObject<OS_dispatch_queue> *accumulationQueue;
    AVWeakReference *weakReferenceToHost;
    double advanceInterval;
    struct __CFDictionary *accumulatedMetadataGroups;
}

@end
