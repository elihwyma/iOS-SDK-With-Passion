/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HMFoundation/HMFOperation.h>

@class HMBCloudZone, NAFuture, NSString;

__attribute__((visibility("hidden")))
@interface HMBShareOperation : HMFOperation

{
    HMBCloudZone *_cloudZone;
    CDUnknownBlockType _block;
    NAFuture *_future;
}

@property (readonly) HMBCloudZone *cloudZone;
@property (copy, readonly) CDUnknownBlockType block;
@property (readonly) NAFuture *future;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)logCategory;

- (void)main;
- (void)cancelWithError:(id)arg1;
- (id)initWithCloudZone:(id)arg1 block:(CDUnknownBlockType)arg2;

@end
