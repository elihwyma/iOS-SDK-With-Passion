/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HMFoundation/HMFObject.h>

@class HMBCloudZone, HMBCloudZoneRebuilderStatus, NAFuture, NSString;

__attribute__((visibility("hidden")))
@interface HMBSharedCloudZoneRebuilder : HMFObject

{
    HMBCloudZoneRebuilderStatus *_rebuilderStatus;
    NAFuture *_rebuildCompleteFuture;
    HMBCloudZone *_cloudZone;
}

@property (weak, nonatomic) HMBCloudZone *cloudZone;
@property (retain, nonatomic) NAFuture *rebuildCompleteFuture;
@property (copy) HMBCloudZoneRebuilderStatus *rebuilderStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isZoneRebuildInProgress) _Bool zoneRebuildInProgress;

+ (id)logCategory;

- (id)logIdentifier;
- (void)rebuild;
- (id)zoneStartUp;
- (void)handleIdentityLost;
- (void)handleZoneChanged;
- (id)initWithCloudZone:(id)arg1;

@end
