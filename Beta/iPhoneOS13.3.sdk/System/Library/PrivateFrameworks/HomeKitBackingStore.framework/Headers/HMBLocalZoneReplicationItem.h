/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HMFoundation/HMFObject.h>

@class HMBModel;

@interface HMBLocalZoneReplicationItem : HMFObject

{
    HMBModel *_updatedValue;
    HMBModel *_previousValue;
}

@property (nonatomic, readonly) HMBModel *updatedValue;
@property (nonatomic, readonly) HMBModel *previousValue;

@end
