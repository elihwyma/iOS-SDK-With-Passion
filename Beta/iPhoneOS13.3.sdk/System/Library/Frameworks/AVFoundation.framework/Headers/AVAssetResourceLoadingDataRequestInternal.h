/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVWeakReference;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVAssetResourceLoadingDataRequestInternal : NSObject

{
    long long requestedOffset;
    long long requestedLength;
    long long currentOffset;
    NSObject<OS_dispatch_queue> *dataResponseQueue;
    _Bool requestsAllDataToEndOfResource;
    _Bool canSupplyIncrementalDataImmediately;
    AVWeakReference *weakReferenceToLoadingRequest;
}

@end
