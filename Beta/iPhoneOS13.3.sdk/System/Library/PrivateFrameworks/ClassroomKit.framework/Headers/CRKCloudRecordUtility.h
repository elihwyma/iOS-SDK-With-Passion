/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@interface CRKCloudRecordUtility : NSObject

+ (id)recordIdFromCloudStoringObject:(id)arg1 zoneId:(id)arg2;
+ (id)localDeltaFromTuple:(id)arg1 zoneId:(id)arg2 assetStore:(id)arg3 parentObject:(id)arg4;
+ (id)recordFromCloudStoringObject:(id)arg1 zoneId:(id)arg2 assetStore:(id)arg3;
+ (id)localSubItemSetsDeltaFromTuple:(id)arg1 zoneId:(id)arg2 assetStore:(id)arg3 parentObject:(id)arg4;
+ (id)localSubItemsDeltaFromTuple:(id)arg1 zoneId:(id)arg2 assetStore:(id)arg3 parentObject:(id)arg4;
+ (id)localDeltaFromTuple:(id)arg1 zoneId:(id)arg2 assetStore:(id)arg3;
+ (_Bool)record:(id)arg1 isEqualToRecord:(id)arg2;

@end
