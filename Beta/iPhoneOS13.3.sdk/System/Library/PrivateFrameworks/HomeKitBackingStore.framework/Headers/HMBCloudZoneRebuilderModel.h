/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HomeKitBackingStore/HMBModel.h>

@class NSNumber, NSUUID;

__attribute__((visibility("hidden")))
@interface HMBCloudZoneRebuilderModel : HMBModel

@property (retain, nonatomic) NSUUID *uniqueToken;
@property (retain, nonatomic) NSNumber *hasCompleted;

+ (id)hmbProperties;
+ (id)sentinelUUID;

- (id)init;

@end
