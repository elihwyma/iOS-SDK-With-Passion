/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@interface CKAssetRepairOperationUtilities : NSObject

+ (id)createRepairContainerFromContainer:(id)arg1 withOverrides:(id)arg2;
+ (_Bool)repairErrorShouldBeMarkedAsBroken:(id)arg1;
+ (_Bool)errorShouldTriggerNetworkReachabilityEvent:(id)arg1;
+ (_Bool)errorIsRetriableInNearFuture:(id)arg1;
+ (id)createRepairOperationGroupWithName:(id)arg1;
+ (id)createRepairContainerFromContainer:(id)arg1;
+ (void)clearRepairZoneForDatabase:(id)arg1 withRepairContainerOverrides:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)repairRecordFromRecord:(id)arg1 field:(id)arg2 listIndex:(long long)arg3 repairZoneID:(id)arg4;
+ (id)uploadRequestMetadataFromRepairRecord:(id)arg1;

@end
