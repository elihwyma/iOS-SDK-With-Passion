/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HMFoundation/HMFObject.h>

#import <HomeKitBackingStore/Swift-Protocol.h>

@class CKContainerID, CKOperationConfiguration, HMFScheduler, NSString;

@interface HMBCloudDatabaseConfiguration : HMFObject <Swift>

{
    _Bool _manateeContainer;
    CKContainerID *_containerID;
    NSString *_sourceApplicationBundleIdentifier;
    CKOperationConfiguration *_defaultOperationConfiguration;
    HMFScheduler *_apsRegistrationScheduler;
}

@property (getter=isManateeContainer) _Bool manateeContainer;
@property (copy) CKOperationConfiguration *defaultOperationConfiguration;
@property (copy) NSString *sourceApplicationBundleIdentifier;
@property (retain, nonatomic) HMFScheduler *apsRegistrationScheduler;
@property (copy, readonly) CKContainerID *containerID;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithContainerID:(id)arg1;
- (id)attributeDescriptions;

@end
