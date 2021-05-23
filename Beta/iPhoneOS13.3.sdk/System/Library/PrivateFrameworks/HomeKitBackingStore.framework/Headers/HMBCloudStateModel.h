/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HomeKitBackingStore/HMBModel.h>

@class CKServerChangeToken;

@interface HMBCloudStateModel : HMBModel

@property (retain, nonatomic) CKServerChangeToken *serverChangeToken;

+ (id)hmbProperties;

@end
