/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HMFoundation/HMFObject.h>

@class NAFuture;

@interface HMBCloudZonePullResult : HMFObject

{
    NAFuture *_processResult;
}

@property (nonatomic, readonly) NAFuture *processResult;

- (id)initWithProcessResult:(id)arg1;

@end
