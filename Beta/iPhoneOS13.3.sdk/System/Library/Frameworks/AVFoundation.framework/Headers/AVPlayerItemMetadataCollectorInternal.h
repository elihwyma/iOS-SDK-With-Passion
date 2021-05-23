/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVWeakReference, AVWeakReferencingDelegateStorage, NSArray, NSDate;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVPlayerItemMetadataCollectorInternal : NSObject

{
    AVWeakReferencingDelegateStorage *delegateStorage;
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    NSArray *identifiers;
    NSArray *classifyingLabels;
    NSDate *mostRecentlyModifiedMetadataGroupTimestamp;
    AVWeakReference *weakReferenceToPlayerItem;
}

@end
