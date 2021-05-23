/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HomeKitBackingStore/HMBCloudDatabaseConfiguration.h>

@class CKOperationConfiguration, HMFScheduler, NSString;

@interface HMBMutableCloudDatabaseConfiguration : HMBCloudDatabaseConfiguration

@property (copy) NSString *sourceApplicationBundleIdentifier;
@property (getter=isManateeContainer) _Bool manateeContainer;
@property (copy) CKOperationConfiguration *defaultOperationConfiguration;
@property (retain, nonatomic) HMFScheduler *apsRegistrationScheduler;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
