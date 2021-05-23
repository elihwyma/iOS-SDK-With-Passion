/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HomeKitBackingStore/HMBModel.h>

@class CKShare;

@interface HMBCloudZoneShareModel : HMBModel

@property (retain, nonatomic) CKShare *share;

+ (id)hmbProperties;
+ (id)hmbExternalRecordType;

@end
