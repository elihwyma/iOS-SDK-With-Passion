/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HomeKitBackingStore/HMBCloudStateModel.h>

@class HMBCloudZone, HMBCloudZoneID, HMBCloudZoneRebuilderStatus, NSData, NSNumber, NSSet;

@interface HMBCloudZoneStateModel : HMBCloudStateModel

{
    HMBCloudZone *_cloudZone;
    HMBCloudZoneRebuilderStatus *_rebuilderStatus;
}

@property (retain, nonatomic) NSData *subscriptionsData;
@property (weak) HMBCloudZone *cloudZone;
@property (retain, nonatomic) HMBCloudZoneID *zoneID;
@property (retain, nonatomic) NSNumber *needsZoneCreation;
@property (retain, nonatomic) NSNumber *needsZoneDeletion;
@property (retain, nonatomic) NSSet *subscriptions;
@property (retain, nonatomic) HMBCloudZoneRebuilderStatus *rebuilderStatus;

+ (id)hmbProperties;

- (id)initWithModelID:(id)arg1 parentModelID:(id)arg2;

@end
