/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

@class HMBCloudZoneRebuilderStatus, MISSING_TYPE, NAFuture;

@protocol HMBCloudZoneRebuilder

@property (nonatomic, readonly) NAFuture *rebuildCompleteFuture;
@property (copy, readonly) HMBCloudZoneRebuilderStatus *rebuilderStatus;
@property (nonatomic, readonly, getter=isZoneRebuildInProgress) _Bool zoneRebuildInProgress;

- (MISSING_TYPE *)rebuild;
- (MISSING_TYPE *)zoneStartUp;
- (MISSING_TYPE *)handleIdentityLost;
- (MISSING_TYPE *)handleZoneChanged;

@end
